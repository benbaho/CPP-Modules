/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:02:05 by bdurmus           #+#    #+#             */
/*   Updated: 2023/10/02 19:02:05 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

//Float max: 3.40282e+38
//Float min: -3.40282e+38
//Double max: 1.79769e+308
//Double min: -1.79769e+308
//Int max: 2147483647
//Int min: -2147483648
//Char max: 127
//Char min: -128

int main (int ac, char **av){
    
    if (ac != 2){
        std::cout << "Wrong number of arguments!" << std::endl;
        return 1;
    }
    
    ScalarConverter sc;

    try
    {
        sc.convert(av[1]);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    


    return 0;
}