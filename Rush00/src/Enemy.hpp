/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wanderer <wanderer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 22:16:15 by wanderer          #+#    #+#             */
/*   Updated: 2019/09/28 22:22:57 by wanderer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include "Character.hpp"

class Enemy : public Character
{
private:
	/* data */
public:
	Enemy(/* args */);
	~Enemy();
};

Enemy::Enemy(/* args */)
{
}

Enemy::~Enemy()
{
	
}

#endif