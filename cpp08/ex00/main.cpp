/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:39:13 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/22 17:39:22 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

int main()
{
    std::vector<int> vec(5);
    std::list<int> listt;
    std::deque<int> deque;

    for (size_t i = 1; i <= 5; i++) {
        deque.push_back(i);;
        vec.push_back(i);
        listt.push_back(i);
    }

    try {
        std::cout << easyfind(vec, 5) << std::endl;
        std::cout << easyfind(deque, 3) << std::endl;
        std::cout << easyfind(listt, 10) << std::endl;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

}