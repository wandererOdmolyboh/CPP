/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 11:50:19 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/21 16:28:12 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{

public:

		/***Constructs***/
	PlasmaRifle();
	PlasmaRifle(int apcost, int damage);
	PlasmaRifle(std::string const & name);
	PlasmaRifle(std::string const & name, int apcost, int damage);
	~PlasmaRifle();
	/***Overloads***/
	PlasmaRifle  &operator=(const PlasmaRifle &sorc);

void attack() const;
};
#endif