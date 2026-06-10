/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassunca <cassunca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 18:57:02 by cassunca          #+#    #+#             */
/*   Updated: 2026/06/04 17:19:51 by cassunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::setName( std::string name)
{
    this->name = name;
    std::cout << this->name << ": was created" << std::endl;
}

Zombie::Zombie( void ) {}

Zombie::~Zombie()
{
    std::cout << name << ": was destroyed" << std::endl;
}

void    Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
