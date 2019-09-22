/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 11:51:07 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/21 20:29:13 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
	private:
		std::string Type;
		int	HP;
	
	public:
	Enemy();
	virtual ~Enemy();
	std::string  getType() const;
	int getHP() const;
	void setType(const std::string type);
	void setHP(int hp);
	virtual void takeDamage(int damage);
};

#endif