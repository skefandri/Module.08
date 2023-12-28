#include "BitcoinExchange.hpp"
#include<sstream>
void    BitcoinExchange::loadDataBase(std::string& filename)
{
    std::ifstream file(filename.c_str());
    std::string line, date;
    double rate;
    if (file.is_open())
    {
        while(std::getline(file, line))
        {
            std::stringstream iss(line);
            getline(iss, line, ',');
            iss >> rate;
            map[date] = rate;
        }
        file.close();
    }
    else
        throw std::runtime_error("Error: could not open file.");
}

double  BitcoinExchange::getExchangeRate(std::string& data)
{
    
}
