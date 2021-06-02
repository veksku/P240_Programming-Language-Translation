#ifndef BROJ_HPP
#define BROJ_HPP

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>

using namespace std;

class Broj {
	
	private:
		vector<int> _b;
		
	public:
		Broj() {}
		Broj(int x);
		Broj(const vector<int>& v);
		Broj(const Broj& b);
		
		int get_size() const;
		void push_back(int x);
		
		void show(ostream& s) const;
		void show(int base) const;
		
		int operator [](int i);
		
		bool operator ==(const Broj& b) const;
		bool operator !=(const Broj& b) const;
		
		Broj* operator +(const Broj& b) const;
		Broj* operator -(const Broj& b) const;
		Broj* operator *(const Broj& b) const;
		Broj* operator /(const Broj& b) const;
		Broj* operator %(const Broj& b) const;
		
		Broj* operator &(const Broj& b) const;
		Broj* operator |(const Broj& b) const;
		Broj* operator ^(const Broj& b) const;
		Broj* operator <<(const Broj& b) const;
		Broj* operator >>(const Broj& b) const;
		
		Broj* operator -() const;
		Broj* operator ~() const;
};

ostream& operator <<(ostream& s, const Broj& b);

#endif
