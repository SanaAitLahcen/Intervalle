#pragma once
#include<iostream>

template <class I>
class Intervalle
{
private:
	I bourne_inf;
	I bourne_sup;

public:
	Intervalle(I, I);
	~Intervalle();
	I operator[](int ind) const;
	void afficher() const;
};

template<class I>
inline Intervalle<I>::Intervalle(I inf, I sup):bourne_inf(inf), bourne_sup(sup)
{}

template<class I>
inline Intervalle<I>::~Intervalle()
{
	std::cout << "Destricteur Intervalle " << std::endl;
}

template<class I>
inline I Intervalle<I>::operator[](int ind) const
{
	if (ind == 0)
	{
		return bourne_inf; // Retourne la borne inférieure
	}
	else if (ind == 1)
	{
		return bourne_sup; // Retourne la borne supérieure
	}
	else
	{
		std::cout << "Erreur : Indice invalide ! Utilisez 0 pour la borne inférieure ou 1 pour la borne supérieure." << std::endl;
		exit(1);  // Termine le programme
	}
}

template<class I>
inline void Intervalle<I>::afficher() const
{
	std::cout << "Intervalle [" << bourne_inf << "," << bourne_sup << "]" << std::endl;
}
