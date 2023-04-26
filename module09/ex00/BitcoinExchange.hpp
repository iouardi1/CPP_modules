/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:34:14 by iouardi           #+#    #+#             */
/*   Updated: 2023/04/26 17:08:28 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <map>

class btc
{
	private:
		std::map<long, float>                		mapy;
		std::string                                 fileName;
	
	public:
		btc();
		~btc();
		btc(btc const &copy);
		btc &operator=(btc const &copy);
		btc(std::string fileName);
		void    parseFile(char	*str);
		void    parseDate(std::string	date);
		void	doMath(std::string	date, float	num);
		size_t	numTirre(std::string date);




};
#endif