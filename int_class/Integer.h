#pragma once
#include <iostream>
class Integer {
	int *m_pInt;
public:
	Integer();
	Integer(int value);
	Integer(const Integer& obj);
	Integer(Integer&& obj);
	int GetValue() const;
	void SetValue(int value);
	~Integer();
	Integer & operator ++();
	Integer operator ++(int);
	bool operator ==(const Integer &a) const;

    Integer & operator =(const Integer &a);
    Integer & operator =(Integer &&a);
};