/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:57:28 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/25 14:11:42 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;    
    
    mstack.push(5);
    mstack.push(17);    
    
    std::cout << mstack.top() << std::endl; 
    
    mstack.pop();   
    
    std::cout << mstack.size() << std::endl;    
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0); 
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();  
    
    ++it;
    --ite;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    
    }
    std::stack<int> s(mstack);


    try {
        std::list<int> mstack2;

        mstack2.push_back(5);
        mstack2.push_back(17);
        mstack2.push_back(1121212);
        mstack2.push_back(17);
        mstack2.push_back(171212);
        
        std::cout << "----------------\nsize: " << mstack2.size() << std::endl;

        mstack2.push_back(3);
        mstack2.push_back(5);
        mstack2.push_back(737);
        mstack2.push_back(-123);

        std::cout << "size: " << mstack2.size() << std::endl;
        
        std::list<int>::iterator it = mstack2.begin();
        std::list<int>::iterator ite = mstack2.end();

        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return (0);
}