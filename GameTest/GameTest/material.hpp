#pragma once
#ifndef MATERIAL_H
#define MATERIAL_H

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cin;

class Material {
public:
	Material();
	Material(int incId, string incName, int incProperties[10], float incDensity, float incPriority, int incMagical_elements[10], int incRarity, int incMaterial_reactants_good[10], int incMaterial_reactants_bad[10], int incProcessing_temp_min, int incProcessing_temp_opt, int incProcessing_temp_max, int incProcessing_temp_var, int incProcessing_technique_good[10], int incProcessing_technique_opt);
	void get_attributes();
	float get_process_time(int temp) {

	}
protected:
	int		id;									// inside ID of the material, never seen by players
	string	name;								// name of the material, ex Silver, Iron, Wolfsbane
	int 	properties[10];						// any special properties of material, ex stunning, sharpness, easier enchanting?
	float 	density;							// used to find weight when combined with other materials and formed into weapons etc.
	float 	priority;							// priority of materials properties when combined in an alloy or etc.
	int 	magical_elements[10];				// association with magical elements, eg fire, wind, earth, water, etc.
	int 	rarity;								// rarity of material, epic, legendary, common, uncommon, unique etc.
	int 	material_reactants_good[10];		// array of ID's of other raw materials it combines well with.
	int 	material_reactants_bad[10];			// array of ID's of other raw materials it doesn't combine well with.
	int 	processing_temp_min;				// minimum temperature needed to process material
	int		processing_temp_opt;				// optimum temperature to process material
	int		processing_temp_max;				// maximum temperature that can be used to process material
	int		processing_time_var;				// amount of variance allowed from optimum processing time 
	int 	processing_technique_good[10];		// array of processing technique ID's that are good to use for this material.  eg, smithing, alchemy, etc.
	int 	processing_technique_opt;			// the ID of the best processing technique for the material.  if not in good or optimal, material has no effect 

	void	set_id(int incId);
	void	set_name(string incName);
	void	set_properties(int incProperties[10]);
	void	set_density(float incDensity);
	void	set_priority(float incPriority);
	void	set_magical_elements(int incMagical_elements[10]);
	void	set_rarity(int incRarity);
	void	set_material_reactions_good(int incMaterial_reactions_good[10]);
	void	set_material_reactions_bad(int incMaterial_reactions_bad[10]);
	void	set_processing_temp_min(int incProcessing_temp_min);
	void	set_processing_temp_opt(int incProcessing_temp_opt);
	void	set_processing_temp_max(int incProcessing_temp_max);
	void	set_processing_temp_var(int incProcessing_temp_var);
	void	set_processing_technique_good(int incProcessing_technique_good[10]);
	void	set_processing_technique_opt(int incProcessing_technique_opt);

	int		get_id();
	string	get_name();
	int		get_properties();
	float	get_density();
	float	get_priority();
	int		get_magical_elements();
	int		get_rarity();
	int		get_material_reactions_good();
	int		get_material_reactions_bad();
	int		get_processing_temp_min();
	int		get_processing_temp_opt();
	int		get_processing_temp_max();
	int		get_processing_temp_var();
	int		get_processing_technique_good();
	int		get_processing_technique_opt();

	int		processing_temp_time(int incTemp);									// returns optimum time to process material based on temperature.  unique to each materialt
	void	special_reactions(int reactant_ID, int reactant_quantity);			// returns effect of special reactants on material
};


#endif // !MATERIAL_H
