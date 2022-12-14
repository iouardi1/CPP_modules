/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:07:51 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/14 17:31:15 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
    std::vector<int> viiictor;

    for (int i = 0; i < 10; i++)
        viiictor.push_back(i);
    
    std::cout << easyfind(viiictor, 5) << std::endl;
}