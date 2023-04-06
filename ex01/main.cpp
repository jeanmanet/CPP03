/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 11:50:44 by jmanet            #+#    #+#             */
/*   Updated: 2023/04/06 19:41:04 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void){
	ClapTrap	jerry("Jerry");
	ScavTrap	tom("Tom");

	tom.guardGate();
	jerry.attack(tom.getName());
	tom.takeDamage(jerry.getAttackDamage());
	jerry.beRepaired(10);
	tom.attack(jerry.getName());
	jerry.takeDamage(tom.getAttackDamage());
	jerry.beRepaired(2);
	jerry.beRepaired(2);
	tom.beRepaired(10);

	return (0);
}
