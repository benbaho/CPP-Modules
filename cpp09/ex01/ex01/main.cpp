/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:20:40 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/26 17:00:50 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main (int ac, char **av){
    try 
    {
        if (ac != 2)
            throw std::invalid_argument("Error: Missing args.");
        exec(std::string(av[1]));
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}