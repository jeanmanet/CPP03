/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 11:59:01 by jmanet            #+#    #+#             */
/*   Updated: 2023/04/06 18:27:13 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
:	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "A new ClapTrap named " << name << " borned in this cruel world !" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& src) {
	*this = src;
	std::cout << "Science made a clone copy of ClapTrap named" << src._name << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Rest in peace dear " << this->_name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs){
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target) {
	if (this->_hitPoints > 0){
		if (this->_energyPoints > 0) {
			this->_energyPoints--;
			std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
		}
		else {
			std::cout << this->_name << " has no more energy to attack !" << std::endl;
		}
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints > 0){
		std::cout << this->_name << " takes damage and lost " << amount << " hit points." << std::endl;
		if ( amount >= this->_hitPoints) {
			std::cout << this->_name << " is dead !" << std::endl;
			this->_hitPoints = 0;
		}
		else
			this->_hitPoints -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints > 0){
		if (this->_energyPoints > 0){
			this->_energyPoints--;
			std::cout << this->_name << " is repairing itself and recover " << amount << " hit points." << std::endl;
			this->_hitPoints += amount;
		}
		else {
			std::cout << this->_name << " has no more energy to repair itself !" << std::endl;
		}
	}
}
