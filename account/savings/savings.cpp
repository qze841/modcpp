#include "savings.h"

Savings::Savings(const std::string &name, float balance, float rate){

}

Savings::~Savings(){

}

float Savings::GetInterestRate() const {
	return m_Rate;
}

void Savings::AccumulateInterest() {
	m_Balance += (m_Balance * m_Rate);
}