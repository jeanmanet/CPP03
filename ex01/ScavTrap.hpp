/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:59:40 by jmanet            #+#    #+#             */
/*   Updated: 2023/04/06 19:27:58 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
private:


public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();

	void	attack(const std::string& target);
	void	guardGate() const;
};




#endif
