/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:13:33 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/20 20:35:09 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"

int main() 
{
    {
        try{
        
            Array<int> myArray(10);
            for (unsigned int i = 0; i < myArray.size(); i++)
                myArray[i] = i * 12;

            for (unsigned int i = 0; i < myArray.size(); i++) 
                std::cout << myArray[i] << std::endl;
            
        }
        catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
    {
        try{
            
            Array<std::string> myArray(3);
            std::string tmp[] = {"test1", "test2", "test3"};

            for (unsigned int i = 0; i < myArray.size(); i++)
                myArray[i] = tmp[i];

            for (unsigned int i = 0; i < myArray.size(); i++) 
                std::cout << myArray[i] << std::endl;

        }
        catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }

}   