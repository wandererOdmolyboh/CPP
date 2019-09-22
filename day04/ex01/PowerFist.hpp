/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 11:50:41 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/21 16:28:01 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{

public:

		/***Constructs***/
	PowerFist();
	PowerFist(int apcost, int damage);
	PowerFist(std::string const & name);
	PowerFist(std::string const & name, int apcost, int damage);
	~PowerFist();
	/***Overloads***/
	PowerFist  &operator=(const PowerFist &sorc);

void attack() const;
};