/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:11:12 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/29 23:46:56 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template<typename Iterator>
Iterator myPrev(Iterator it) {
    return --it;
}

void printTimeval(clock_t t1, clock_t t2, std::string tmp, size_t size)
{
    double timePased = static_cast<double>(t2 - t1) / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of " << size << " elements with " << tmp << std::fixed << timePased << " us" << std::endl;
 
    
}

void printNumbers(std::list<int> &tmp, std::string word)
{
    int c = 0;
    
    std::cout << word;
    for (std::list<int>::iterator it = tmp.begin(); it!= tmp.end();it++)
    {
        if (c < 8)
            std::cout << *it << " ";
        else
        {
            std::cout << "[...]";
            break;
        }
        c++;
    }
    std::cout << std::endl;
}


template<typename T>
void insert(T &arr)
{
    typename T::iterator it1, it2;
    for (it1 = ++arr.begin(); it1 != arr.end(); ++it1)
    {
        int temp = *it1;
        it2 = it1;
        while (it2 != arr.begin() && *(myPrev(it2)) > temp)
        {
            *it2 = *(myPrev(it2));
            std::advance(it2, -1);
        }
        *it2 = temp;
    }
}

template<typename T>
void merge(typename T::iterator left, typename T::iterator mid, typename T::iterator right) 
{
    T merged;    
    typename T::iterator it1 = left;
    typename T::iterator it2 = mid;
    
    while (it1 != mid && it2 != right) 
    {
        if (*it1 <= *it2) 
        {
            merged.push_back(*it1);
            it1++;
        } 
        else 
        {
            merged.push_back(*it2);
            it2++;
        }
    }
    
    for (;it1 != mid;it1++)
        merged.push_back(*it1);
    
    for (;it2 != right;it2++) 
        merged.push_back(*it2);
    
    typename T::iterator it = left;
    typename T::iterator itMerged = merged.begin();
    
    for (;it != right;it++, itMerged++) 
        *it = *itMerged;
}


template<typename T>
void mergeInsert(T &numbers, typename T::iterator left, typename T::iterator right)
{
    if (std::distance(left, right) > 5)
    {
        typename T::iterator mid = left;
        std::advance(mid, std::distance(left, right) / 2);
        mergeInsert(numbers, left, mid);
        mergeInsert(numbers, mid, right);
        merge<T>(left, mid, right);
    }
    else
        insert(numbers);
    
}

void exec(char **av)
{
    std::list<int> listNumbers;
    std::string tmp;
    clock_t first, last;

    for (int i = 1; av[i]; i++)
    {
        std::stringstream ss(av[i]);
        for (int c = 0; ss >> tmp; c++)
        {   
            if ((tmp.size() == 1 && tmp[0] == '0') || !isdigit(tmp[c]))
                throw std::invalid_argument("Error: There is a not allowed char.");
        }
        if (atol(tmp.c_str()) > INT_MAX)
            throw std::invalid_argument("Error: Out of integer range.");
        listNumbers.push_back(atoi(tmp.c_str()));
        tmp.clear();
        ss.clear();
    }
    std::deque<int> dequeNumbers(listNumbers.begin(), listNumbers.end());
    

    printNumbers(listNumbers, "Before:  ");
    
    first = clock();
    mergeInsert(listNumbers, listNumbers.begin(), listNumbers.end());
    last = clock();
    
    printNumbers(listNumbers, "After:   ");
    printTimeval(first, last, "std::list  : ", listNumbers.size());

    first = clock();
    mergeInsert(dequeNumbers, dequeNumbers.begin(), dequeNumbers.end());
    last = clock();
    
    printTimeval(first, last, "std::deque : ", dequeNumbers.size());

    
}

