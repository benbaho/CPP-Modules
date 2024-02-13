/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:31:19 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/13 20:49:40 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void printType(const std::string &tmp){
    std::cout << tmp << std::endl;
}


Base * generate(void){

    Base *data = NULL;
    srand(time(0));
    int tmp = rand();

    if (tmp % 2)
        return (dynamic_cast<A*>(data));
    else if (tmp % 3)
        return (dynamic_cast<B*>(data));
    else if (tmp % 5)
        return (dynamic_cast<C*>(data));
    return data;
}


void identify(Base* p){
    if (dynamic_cast<A*>(p))
        printType("Actual Type Is: A");
    else if (dynamic_cast<B*>(p))
        printType("Actual Type Is: B");
    else if (dynamic_cast<C*>(p))
        printType("Actual Type Is: C");
}


void identify(Base& p){
    A a;
    B b;
    C c;
    
    try{
        {
            a = dynamic_cast<A&>(p);
            printType("Actual Type Is: A");
        }
        {
            b = dynamic_cast<B&>(p);
            printType("Actual Type Is: B");
        }
        {
            c = dynamic_cast<C&>(p);
            printType("Actual Type Is: C");
        }
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}
    


int main (){
    Base *tmp = generate();
    
    identify(*tmp);
    identify(tmp);
    
}