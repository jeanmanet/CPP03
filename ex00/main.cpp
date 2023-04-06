/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 11:50:44 by jmanet            #+#    #+#             */
/*   Updated: 2023/04/06 16:28:49 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void){
	ClapTrap	jerry("Jerry");

	jerry.attack("Franck");
	jerry.attack("Franck");
	jerry.attack("Franck");
	jerry.attack("Franck");
	jerry.beRepaired(2);
	jerry.takeDamage(5);
	jerry.beRepaired(2);
	jerry.beRepaired(2);
	jerry.beRepaired(2);
	jerry.beRepaired(2);
	jerry.takeDamage(5);
	jerry.takeDamage(5);
	jerry.takeDamage(5);
	jerry.beRepaired(2);
	jerry.beRepaired(2);
	jerry.beRepaired(2);
	jerry.attack("Franck");

	return (0);
}
