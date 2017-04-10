#include "material.hpp"





Material::Material()
{
}

Material::Material(int incId, string incName, int incProperties[10], float incDensity, float incPriority, int incMagical_elements[10], int incRarity, int incMaterial_reactants_good[10], int incMaterial_reactants_bad[10], int incProcessing_temp_min, int incProcessing_temp_opt, int incProcessing_temp_max, int incProcessing_temp_var, int incProcessing_technique_good[10], int incProcessing_technique_opt)
{
}

void Material::set_id(int incId)
{
}

void Material::set_name(string incName)
{
}

void Material::set_properties(int incProperties[10])
{
}

void Material::set_density(float incDensity)
{
}

void Material::set_priority(float incPriority)
{
}

void Material::set_magical_elements(int incMagical_elements[10])
{
}

void Material::set_rarity(int incRarity)
{
}

void Material::set_material_reactions_good(int incMaterial_reactions_good[10])
{
}

void Material::set_material_reactions_bad(int incMaterial_reactions_bad[10])
{
}

void Material::set_processing_temp_min(int incProcessing_temp_min)
{
}

void Material::set_processing_temp_opt(int incProcessing_temp_opt)
{
}

void Material::set_processing_temp_max(int incProcessing_temp_max)
{
}

void Material::set_processing_temp_var(int incProcessing_temp_var)
{
}

void Material::set_processing_technique_good(int incProcessing_technique_good[10])
{
}

void Material::set_processing_technique_opt(int incProcessing_technique_opt)
{
}

int Material::get_id()
{
	return 0;
}

string Material::get_name()
{
	return string();
}

int Material::get_properties()
{
	return 0;
}

float Material::get_density()
{
	return 0.0f;
}

float Material::get_priority()
{
	return 0;
}

int Material::get_magical_elements()
{
	return 0;
}

int Material::get_rarity()
{
	return 0;
}

int Material::get_material_reactions_good()
{
	return 0;
}

int Material::get_material_reactions_bad()
{
	return 0;
}

int Material::get_processing_temp_min()
{
	return 0;
}

int Material::get_processing_temp_opt()
{
	return 0;
}

int Material::get_processing_temp_max()
{
	return 0;
}

int Material::get_processing_temp_var()
{
	return 0;
}

int Material::get_processing_technique_good()
{
	return 0;
}

int Material::get_processing_technique_opt()
{
	return 0;
}

int Material::processing_temp_time(int incTemp)
{
	return 0;
}

void Material::special_reactions(int reactant_ID, int reactant_quantity)
{
}
