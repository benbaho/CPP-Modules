/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:50:30 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/25 17:42:41 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int ac, char **av){
    try 
    {
        if (ac != 2)
            throw std::invalid_argument("Error: could not open file.");
        exec(std::string(av[1]));
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}