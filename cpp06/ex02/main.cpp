/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:31:19 by bdurmus           #+#    #+#             */
/*   Updated: 2024/02/15 19:37:01 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void printType(const std::string &tmp){
    std::cout << tmp << std::endl;
}

Base * generate(void){

    Base *data = NULL;
    srand(time(0));
    size_t tmp = rand();

    if (tmp % 2 == 0)
        data = new A;
    else if (tmp % 3 == 0)
        data = new B;
    else
        data = new C;
    return data;
}

void identify(Base* p){
    if (dynamic_cast<A*>(p))
        printType("Actual Type Is*: A");
    else if (dynamic_cast<B*>(p))
        printType("Actual Type Is*: B");
    else if (dynamic_cast<C*>(p))
        printType("Actual Type Is*: C");
}


void identify(Base& p){
    A a;
    B b;
    C c;

    try{
    
        a = dynamic_cast<A&>(p);
        printType("Actual Type Is&: A");
    
    } catch (std::exception &e){ printType(e.what()); }

    try{
      
        b = dynamic_cast<B&>(p);
        printType("Actual Type Is&: B");
    
    } catch(std::exception &e){ printType(e.what()); }
    
    try{
        
        c = dynamic_cast<C&>(p);
        printType("Actual Type Is&: C");
    
    } catch (std::exception &e){ printType(e.what()); }
}

int main (){
    Base *tmp = generate();

    
    identify(tmp);
    identify(*tmp);

    delete tmp;
    return (0);
}