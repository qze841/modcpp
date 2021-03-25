#pragma once

#include "../account.h"
class Savings:
	public Account {
		float m_Rate;
	public:
		Savings(const std::string &name, float balance, float rate);
		float GetInterestRate() const;
		void AccumulateInterest();
};
