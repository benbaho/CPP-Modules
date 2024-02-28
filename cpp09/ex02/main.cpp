/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:11:17 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/28 14:12:20 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main (int ac, char **av){
    try 
    {
        if (ac < 2)
            throw std::invalid_argument("Error");
        exec(av);
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}