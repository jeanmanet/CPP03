/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 18:10:23 by jmanet            #+#    #+#             */
/*   Updated: 2023/04/06 19:29:12 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
:	ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << name << ", a big evolution of ClapTrap is coming and join the war !" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->getName() << " is leaving this world, say good bye to him !" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	if (this->getHitPoints() > 0){
		if (this->getEnergyPoints() > 0) {
			this->setEnergyPoints(this->getEnergyPoints() - 1);
			std::cout << "ScavTrap " << this->getName() << " make a big attack to " << target << ", causing " << this->getAttackDamage() << " points of damage !" << std::endl;
		}
		else {
			std::cout << this->getName()<< " has no more energy to attack !" << std::endl;
		}
	}
}

void	ScavTrap::guardGate() const {
	std::cout << this->getName() << " is now keeping the kingdom door !" << std::endl;
}
