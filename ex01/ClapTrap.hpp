/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 11:50:59 by jmanet            #+#    #+#             */
/*   Updated: 2023/04/06 19:12:56 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:

	std::string	_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

public:

	ClapTrap(std::string name);
	ClapTrap(ClapTrap& src);
	~ClapTrap();

	ClapTrap& operator=(const ClapTrap& rhs);

	void	setHitPoints(unsigned int points);
	void	setEnergyPoints(unsigned int points);
	void	setAttackDamage(unsigned int damage);
	void	setName(std::string newName);
	unsigned int	getHitPoints() const;
	unsigned int	getEnergyPoints() const;
	unsigned int	getAttackDamage() const;
	std::string		getName() const;

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};


#endif
