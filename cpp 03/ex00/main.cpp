#include "lib/ClapTrap.hpp"

int	main( void )
{
	ClapTrap	clap1( "Clap1" );
	ClapTrap	clap2( "Clap2" );
	clap1.attack( "Clap2" );
	clap2.takeDamage( clap1.getAttackDamage() );
	clap2.beRepaired( 5 );
	clap2.attack( "Clap1" );
	clap1.takeDamage( clap2.getAttackDamage() );
	clap1.beRepaired( 3 );
	return ( 0 );
}