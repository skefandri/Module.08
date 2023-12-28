#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include<iostream>
#include<fstream>
#include<string>
#include<map>

class BitcoinExchange
{
    private:
        std::map<std::string, double> map;
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange&);
        BitcoinExchange& operator=(const BitcoinExchange&);
        void    loadDataBase(std::string& filename);
        double  getExchangeRate(std::string& data);
};

#endif
