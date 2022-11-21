#include <iostream>

class MyString {

private:
	int   m_length;
	char* m_str_data;
	int	  m_memory_capacity;

public:
	int length() const;
	void print() const;
	void println() const;
	int capacity() const;
	void reserve(int size);
	char at(int i) const;
	MyString& assign(const char* str);
	MyString& assign(const MyString& str);
	

	// 문자 하나로 생성
	MyString(char c) {
		m_str_data = new char[1];
		m_str_data[0] = c;
		m_length = 1;
		m_memory_capacity = 1;
	}

	// 문자열로 생성
	MyString(const char* str) {
		m_length = strlen(str);
		m_str_data = new char[m_length];
		m_memory_capacity = m_length;

		for (int i = 0; i != m_length; i++) {
			m_str_data[i] = str[i];
		}
	}

	//복사 생성자
	MyString(const MyString& str) {
		m_length = str.m_length;
		m_memory_capacity = str.m_length;
		m_str_data = new char[m_length];

		for (int i = 0; i != m_length; i++) {
			m_str_data[i] = str.m_str_data[i];
		}
	}

	~MyString() {
		delete[] m_str_data;
	}

};

int MyString::length() const {
	return m_length;
}

void MyString::print() const {
	for (int i = 0; i != m_length; i++) {
		std::cout << m_str_data[i];
	}
}

void MyString::println() const {
	for (int i = 0; i != m_length; i++) {
			std::cout << m_str_data[i];
	}
	std::cout << "\n";
}

MyString& MyString::assign(const MyString& str) {
	
	/* 들어온 문자열이 기존 문자열 길이보다 긴 경우에 새롭게 동적할당
		그렇지 않다면 기존 데이터에 덮어씌움					*/
	if (str.m_length > m_memory_capacity) {
		
		delete[] m_str_data;

		m_str_data = new char[str.m_length];
		m_memory_capacity = str.m_length;
	}
	for (int i = 0; i != str.m_length; i++) {
		m_str_data[i] = str.m_str_data[i];
	}

	m_length = str.m_length;

	return *this;
}

MyString& MyString::assign(const char* str) {
	
	int str_length = strlen(str);
	if (str_length > m_memory_capacity) {
		delete[] m_str_data;

		m_str_data = new char[str_length];
		m_memory_capacity = str_length;
	}
	for (int i = 0; i != str_length; i++) {
		m_str_data[i] = str[i];
	}

	m_length = str_length;
	return *this;
}


int MyString::capacity() const { return m_memory_capacity; }

void MyString::reserve(int size) {
	
	/*	만일 예약하려는 size가 현재 capacity보다 작다면
		실행 되지않는다.*/
	if (size > m_memory_capacity) {
		char* prev_string_content = m_str_data;

		m_str_data = new char[size];
		m_memory_capacity = size;
		
		for (int i = 0; i != m_length; i++) {
			m_str_data[i] = prev_string_content[i];
		}
		delete[] prev_string_content;
	}
}

char MyString::at(int i) const {
	if (i >= m_length || i < 0) {
		return NULL;
	}
	else { return m_str_data[i]; }

}

int main() {

	MyString str1("very very very long string..");
	str1.println();

	std::cout << "Before Capacity : " << str1.capacity() << "\n";
	std::cout << "Before String length : " << str1.length() << "\n";

	str1.reserve(30);
	std::cout << "After Capacity : " << str1.capacity() << "\n";
	std::cout << "After String length : " << str1.length() << "\n";
	
}
