/** @file fonts.h
 * @brief Fonts used for conversion from ASCII to 7x5 LED bitmap patterns
 *
 *	This file is mostly a copy of the original 
 *	Nolleblink implementation
 *
 * @author Geo
 * @author Knalle
 * @date 6 November 2019
 */ 


#ifndef FONTS_H_
#define FONTS_H_

#define X )<<1|1	/**< Used to convert 'X's to '1's */
#define _ )<<1		/**< Used to convert '_'s to '0's *  */
#define s ((((((((0 /**< Initializes column */

/** Font data */
const unsigned char font[219*5] =
{
	// 32
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ X _ X X X X X ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ X X ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ X X ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ X _ X _ _ ,
	s _ X X X X X X X ,
	s _ _ _ X _ X _ _ ,
	s _ X X X X X X X ,
	s _ _ _ X _ X _ _ ,

	s _ _ _ _ _ X _ _ ,
	s _ _ X _ X _ X _ ,
	s _ X X X X X X X ,
	s _ _ X _ X _ X _ ,
	s _ _ _ X _ _ _ _ ,

	s _ _ X _ _ _ X X ,
	s _ _ _ X _ _ X X ,
	s _ _ _ _ X _ _ _ ,
	s _ X X _ _ X _ _ ,
	s _ X X _ _ _ X _ ,

	s _ _ X X _ X X _ ,
	s _ X _ _ X _ _ X ,
	s _ X _ X _ X _ X ,
	s _ _ X _ _ _ X _ ,
	s _ X _ X _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ X X ,
	s _ _ _ _ _ X _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ X X X _ _ ,
	s _ _ X _ _ _ X _ ,
	s _ X _ _ _ _ _ X ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ X _ _ _ _ _ X ,
	s _ _ X _ _ _ X _ ,
	s _ _ _ X X X _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ X _ X _ _ ,
	s _ _ _ _ X _ _ _ ,
	s _ _ X X X X X _ ,
	s _ _ _ _ X _ _ _ ,
	s _ _ _ X _ X _ _ ,

	s _ _ _ _ X _ _ _ ,
	s _ _ _ _ X _ _ _ ,
	s _ _ X X X X X _ ,
	s _ _ _ _ X _ _ _ ,
	s _ _ _ _ X _ _ _ ,

	s _ X _ X _ _ _ _ ,
	s _ _ X X _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ X _ _ _ ,
	s _ _ _ _ X _ _ _ ,
	s _ _ _ _ X _ _ _ ,
	s _ _ _ _ X _ _ _ ,
	s _ _ _ _ X _ _ _ ,

	s _ X X _ _ _ _ _ ,
	s _ X X _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ X _ _ _ _ _ _ ,
	s _ _ X X _ _ _ _ ,
	s _ _ _ _ X _ _ _ ,
	s _ _ _ _ _ X X _ ,
	s _ _ _ _ _ _ _ X ,

	// 48
	s _ _ X X X X X _ ,
	s _ X _ X _ _ _ X ,
	s _ X _ _ X _ _ X ,
	s _ X _ _ _ X _ X ,
	s _ _ X X X X X _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ X _ _ _ _ X _ ,
	s _ X X X X X X X ,
	s _ X _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ X _ _ _ _ X _ ,
	s _ X X _ _ _ _ X ,
	s _ X _ X _ _ _ X ,
	s _ X _ _ X _ _ X ,
	s _ X _ _ _ X X _ ,

	s _ _ X _ _ _ _ X ,
	s _ X _ _ _ _ _ X ,
	s _ X _ _ _ X _ X ,
	s _ X _ _ X _ X X ,
	s _ _ X X _ _ _ X ,

	s _ _ _ X X _ _ _ ,
	s _ _ _ X _ X _ _ ,
	s _ _ _ X _ _ X _ ,
	s _ X X X X X X X ,
	s _ _ _ X _ _ _ _ ,

	s _ _ X _ _ X X X ,
	s _ X _ _ _ X _ X ,
	s _ X _ _ _ X _ X ,
	s _ X _ _ _ X _ X ,
	s _ _ X X X _ _ X ,

	s _ _ X X X X _ _ ,
	s _ X _ _ X _ X _ ,
	s _ X _ _ X _ _ X ,
	s _ X _ _ X _ _ X ,
	s _ _ X X _ _ _ _ ,

	s _ _ _ _ _ _ _ X ,
	s _ X X X _ _ _ X ,
	s _ _ _ _ X _ _ X ,
	s _ _ _ _ _ X _ X ,
	s _ _ _ _ _ _ X X ,

	s _ _ X X _ X X _ ,
	s _ X _ _ X _ _ X ,
	s _ X _ _ X _ _ X ,
	s _ X _ _ X _ _ X ,
	s _ _ X X _ X X _ ,

	s _ _ _ _ _ X X _ ,
	s _ X _ _ X _ _ X ,
	s _ X _ _ X _ _ X ,
	s _ _ X _ X _ _ X ,
	s _ _ _ X X X X _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ X X _ X X _ ,
	s _ _ X X _ X X _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ X _ X _ X X _ ,
	s _ _ X X _ X X _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ X _ _ _ ,
	s _ _ _ X _ X _ _ ,
	s _ _ X _ _ _ X _ ,
	s _ X _ _ _ _ _ X ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ X _ X _ _ ,
	s _ _ _ X _ X _ _ ,
	s _ _ _ X _ X _ _ ,
	s _ _ _ X _ X _ _ ,
	s _ _ _ X _ X _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ X _ _ _ _ _ X ,
	s _ _ X _ _ _ X _ ,
	s _ _ _ X _ X _ _ ,
	s _ _ _ _ X _ _ _ ,

	s _ _ _ _ _ _ X _ ,
	s _ _ _ _ _ _ _ X ,
	s _ X _ X _ _ _ X ,
	s _ _ _ _ X _ _ X ,
	s _ _ _ _ _ X X _ ,

	s _ _ X X X X X _ ,
	s _ X _ _ _ _ _ X ,
	s _ X _ _ X _ _ X ,
	s _ X _ X _ X _ X ,
	s _ X _ X X X X _ ,

	// 65
	s _ X X X X X _ _ ,
	s _ _ _ X _ _ X _ ,
	s _ _ _ X _ _ _ X ,
	s _ _ _ X _ _ X _ ,
	s _ X X X X X _ _ ,
	
	s _ X X X X X X X ,
	s _ X _ _ X _ _ X ,
	s _ X _ _ X _ _ X ,
	s _ X _ _ X _ _ X ,
	s _ _ X X _ X X _ ,
	
	s _ _ X X X X X _ ,
	s _ X _ _ _ _ _ X ,
	s _ X _ _ _ _ _ X ,
	s _ X _ _ _ _ _ X ,
	s _ _ X _ _ _ X _ ,
	
	s _ X X X X X X X ,
	s _ X _ _ _ _ _ X ,
	s _ X _ _ _ _ _ X ,
	s _ _ X _ _ _ X _ ,
	s _ _ _ X X X _ _ ,
	
	s _ X X X X X X X ,
	s _ X _ _ X _ _ X ,
	s _ X _ _ X _ _ X ,
	s _ X _ _ X _ _ X ,
	s _ X _ _ _ _ _ X ,
	
	s _ X X X X X X X ,
	s _ _ _ _ X _ _ X ,
	s _ _ _ _ X _ _ X ,
	s _ _ _ _ X _ _ X ,
	s _ _ _ _ _ _ _ X ,
	
	s _ _ X X X X X _ ,
	s _ X _ _ _ _ _ X ,
	s _ X _ _ X _ _ X ,
	s _ X _ _ X _ _ X ,
	s _ X X X X _ X _ ,
	
	s _ X X X X X X X ,
	s _ _ _ _ X _ _ _ ,
	s _ _ _ _ X _ _ _ ,
	s _ _ _ _ X _ _ _ ,
	s _ X X X X X X X ,
	
	s _ _ _ _ _ _ _ _ ,
	s _ X _ _ _ _ _ X ,
	s _ X X X X X X X ,
	s _ X _ _ _ _ _ X ,
	s _ _ _ _ _ _ _ _ ,
	
	s _ _ X _ _ _ _ _ ,
	s _ X _ _ _ _ _ _ ,
	s _ X _ _ _ _ _ X ,
	s _ _ X X X X X X ,
	s _ _ _ _ _ _ _ X ,
	
	s _ X X X X X X X ,
	s _ _ _ _ X _ _ _ ,
	s _ _ _ X _ X _ _ ,
	s _ _ X _ _ _ X _ ,
	s _ X _ _ _ _ _ X ,
	
	s _ X X X X X X X ,
	s _ X _ _ _ _ _ _ ,
	s _ X _ _ _ _ _ _ ,
	s _ X _ _ _ _ _ _ ,
	s _ X _ _ _ _ _ _ ,
	
	s _ X X X X X X X ,
	s _ _ _ _ _ _ X _ ,
	s _ _ _ _ X X _ _ ,
	s _ _ _ _ _ _ X _ ,
	s _ X X X X X X X ,
	
	s _ X X X X X X X ,
	s _ _ _ _ _ X _ _ ,
	s _ _ _ _ X _ _ _ ,
	s _ _ _ X _ _ _ _ ,
	s _ X X X X X X X ,
	
	s _ _ X X X X X _ ,
	s _ X _ _ _ _ _ X ,
	s _ X _ _ _ _ _ X ,
	s _ X _ _ _ _ _ X ,
	s _ _ X X X X X _ ,
	
	s _ X X X X X X X ,
	s _ _ _ _ X _ _ X ,
	s _ _ _ _ X _ _ X ,
	s _ _ _ _ X _ _ X ,
	s _ _ _ _ _ X X _ ,
	
	s _ _ X X X X X _ ,
	s _ X _ _ _ _ _ X ,
	s _ X _ X _ _ _ X ,
	s _ _ X _ _ _ _ X ,
	s _ X _ X X X X _ ,
	
	s _ X X X X X X X ,
	s _ _ _ _ X _ _ X ,
	s _ _ _ X X _ _ X ,
	s _ _ X _ X _ _ X ,
	s _ X _ _ _ X X _ ,
	
	s _ X _ _ _ X X _ ,
	s _ X _ _ X _ _ X ,
	s _ X _ _ X _ _ X ,
	s _ X _ _ X _ _ X ,
	s _ _ X X _ _ _ X ,
	
	s _ _ _ _ _ _ _ X ,
	s _ _ _ _ _ _ _ X ,
	s _ X X X X X X X ,
	s _ _ _ _ _ _ _ X ,
	s _ _ _ _ _ _ _ X ,
	
	s _ _ X X X X X X ,
	s _ X _ _ _ _ _ _ ,
	s _ X _ _ _ _ _ _ ,
	s _ X _ _ _ _ _ _ ,
	s _ _ X X X X X X ,
	
	s _ _ _ X X X X X ,
	s _ _ X _ _ _ _ _ ,
	s _ X _ _ _ _ _ _ ,
	s _ _ X _ _ _ _ _ ,
	s _ _ _ X X X X X ,
	
	s _ _ X X X X X X ,
	s _ X _ _ _ _ _ _ ,
	s _ _ X X X _ _ _ ,
	s _ X _ _ _ _ _ _ ,
	s _ _ X X X X X X ,
	
	s _ X X _ _ _ X X ,
	s _ _ _ X _ X _ _ ,
	s _ _ _ _ X _ _ _ ,
	s _ _ _ X _ X _ _ ,
	s _ X X _ _ _ X X ,
	
	s _ _ _ _ _ X X X ,
	s _ _ _ _ X _ _ _ ,
	s _ X X X _ _ _ _ ,
	s _ _ _ _ X _ _ _ ,
	s _ _ _ _ _ X X X ,
	
	s _ X X _ _ _ _ X ,
	s _ X _ X _ _ _ X ,
	s _ X _ _ X _ _ X ,
	s _ X _ _ _ X _ X ,
	s _ X _ _ _ _ X X ,
	
	// 91
	s _ X X X X X X X ,
	s _ X _ _ _ _ _ X ,
	s _ X _ _ _ _ _ X ,
	s _ X _ _ _ _ _ X ,
	s _ X _ _ _ _ _ X ,

	s _ _ _ _ _ _ _ X ,
	s _ _ _ _ _ X X _ ,
	s _ _ _ _ X _ _ _ ,
	s _ _ X X _ _ _ _ ,
	s _ X _ _ _ _ _ _ ,

	s _ X _ _ _ _ _ X ,
	s _ X _ _ _ _ _ X ,
	s _ X _ _ _ _ _ X ,
	s _ X _ _ _ _ _ X ,
	s _ X X X X X X X ,

	s _ _ _ _ _ X _ _ ,
	s _ _ _ _ _ _ X _ ,
	s _ _ _ _ _ _ _ X ,
	s _ _ _ _ _ _ X _ ,
	s _ _ _ _ _ X _ _ ,

	s _ X _ _ _ _ _ _ ,
	s _ X _ _ _ _ _ _ ,
	s _ X _ _ _ _ _ _ ,
	s _ X _ _ _ _ _ _ ,
	s _ X _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ X ,
	s _ _ _ _ _ _ X _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	// 97
	s _ _ X _ _ _ _ _ ,
	s _ X _ X _ X _ _ ,
	s _ X _ X _ X _ _ ,
	s _ X _ X _ X _ _ ,
	s _ X X X X _ _ _ ,

	s _ X X X X X X X ,
	s _ X _ _ X _ _ _ ,
	s _ X _ _ _ X _ _ ,
	s _ X _ _ _ X _ _ ,
	s _ _ X X X _ _ _ ,

	s _ _ X X X _ _ _ ,
	s _ X _ _ _ X _ _ ,
	s _ X _ _ _ X _ _ ,
	s _ X _ _ _ X _ _ ,
	s _ _ X _ _ _ _ _ ,

	s _ _ X X X _ _ _ ,
	s _ X _ _ _ X _ _ ,
	s _ X _ _ _ X _ _ ,
	s _ X _ _ X _ _ _ ,
	s _ X X X X X X X ,

	s _ _ X X X _ _ _ ,
	s _ X _ X _ X _ _ ,
	s _ X _ X _ X _ _ ,
	s _ X _ X _ X _ _ ,
	s _ _ _ X X _ _ _ ,

	s _ _ _ _ X _ _ _ ,
	s _ X X X X X X _ ,
	s _ _ _ _ X _ _ X ,
	s _ _ _ _ _ _ _ X ,
	s _ _ _ _ _ _ X _ ,

	s _ _ _ _ X X _ _ ,
	s _ X _ X _ _ X _ ,
	s _ X _ X _ _ X _ ,
	s _ X _ X _ _ X _ ,
	s _ _ X X X X X _ ,

	s _ X X X X X X X ,
	s _ _ _ _ X _ _ _ ,
	s _ _ _ _ _ X _ _ ,
	s _ _ _ _ _ X _ _ ,
	s _ X X X X _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ X _ _ _ X _ _ ,
	s _ X X X X X _ X ,
	s _ X _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ X _ _ _ _ _ ,
	s _ X _ _ _ _ _ _ ,
	s _ X _ _ _ X _ _ ,
	s _ _ X X X X _ X ,
	s _ _ _ _ _ _ _ _ ,

	s _ X X X X X X X ,
	s _ _ X _ _ _ _ _ ,
	s _ _ _ X _ _ _ _ ,
	s _ _ X _ X _ _ _ ,
	s _ X _ _ _ X _ _ ,


	s _ _ _ _ _ _ _ _ ,
	s _ X _ _ _ _ _ X ,
	s _ X X X X X X X ,
	s _ X _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ X X X X X _ _ ,
	s _ _ _ _ _ X _ _ ,
	s _ _ _ X X _ _ _ ,
	s _ _ _ _ _ X _ _ ,
	s _ X X X X _ _ _ ,

	s _ X X X X X _ _ ,
	s _ _ _ _ X _ _ _ ,
	s _ _ _ _ _ X _ _ ,
	s _ _ _ _ _ X _ _ ,
	s _ X X X X _ _ _ ,

	s _ _ X X X _ _ _ ,
	s _ X _ _ _ X _ _ ,
	s _ X _ _ _ X _ _ ,
	s _ X _ _ _ X _ _ ,
	s _ _ X X X _ _ _ ,

	s _ X X X X X _ _ ,
	s _ _ _ X _ X _ _ ,
	s _ _ _ X _ X _ _ ,
	s _ _ _ X _ X _ _ ,
	s _ _ _ _ X _ _ _ ,

	s _ _ _ _ X _ _ _ ,
	s _ _ _ X _ X _ _ ,
	s _ _ _ X _ X _ _ ,
	s _ _ _ X X _ _ _ ,
	s _ X X X X X _ _ ,

	s _ X X X X X _ _ ,
	s _ _ _ _ X _ _ _ ,
	s _ _ _ _ _ X _ _ ,
	s _ _ _ _ _ X _ _ ,
	s _ _ _ _ X _ _ _ ,

	s _ X _ _ X _ _ _ ,
	s _ X _ X _ X _ _ ,
	s _ X _ X _ X _ _ ,
	s _ X _ X _ X _ _ ,
	s _ _ X _ _ _ _ _ ,

	s _ _ _ _ _ X _ _ ,
	s _ _ X X X X X X ,
	s _ X _ _ _ X _ _ ,
	s _ X _ _ _ _ _ _ ,
	s _ _ X _ _ _ _ _ ,

	s _ _ X X X X _ _ ,
	s _ X _ _ _ _ _ _ ,
	s _ X _ _ _ _ _ _ ,
	s _ _ X _ _ _ _ _ ,
	s _ X X X X X _ _ ,

	s _ _ _ X X X _ _ ,
	s _ _ X _ _ _ _ _ ,
	s _ X _ _ _ _ _ _ ,
	s _ _ X _ _ _ _ _ ,
	s _ _ _ X X X _ _ ,

	s _ _ X X X X _ _ ,
	s _ X _ _ _ _ _ _ ,
	s _ _ X X _ _ _ _ ,
	s _ X _ _ _ _ _ _ ,
	s _ _ X X X X _ _ ,

	s _ X _ _ _ X _ _ ,
	s _ _ X _ X _ _ _ ,
	s _ _ _ X _ _ _ _ ,
	s _ _ X _ X _ _ _ ,
	s _ X _ _ _ X _ _ ,

	s _ _ _ _ X X _ _ ,
	s _ X _ X _ _ _ _ ,
	s _ X _ X _ _ _ _ ,
	s _ X _ X _ _ _ _ ,
	s _ _ X X X X _ _ ,

	s _ X _ _ _ X _ _ ,
	s _ X X _ _ X _ _ ,
	s _ X _ X _ X _ _ ,
	s _ X _ _ X X _ _ ,
	s _ X _ _ _ X _ _ ,

	// 123
	s _ _ _ _ X _ _ _ ,
	s _ _ X X _ X X _ ,
	s _ X _ _ _ _ _ X ,
	s _ X _ _ _ _ _ X ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ X X X X X X X ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ X _ _ _ _ _ X ,
	s _ X _ _ _ _ _ X ,
	s _ _ X X _ X X _ ,
	s _ _ _ _ X _ _ _ ,

	s _ _ _ _ X _ _ _ ,
	s _ _ _ _ _ X _ _ ,
	s _ _ _ _ X _ _ _ ,
	s _ _ _ X _ _ _ _ ,
	s _ _ _ _ X _ _ _ ,

	s _ X X X X _ _ _ ,
	s _ X _ _ _ X _ _ ,
	s _ X _ _ _ _ X _ ,
	s _ X _ _ _ X _ _ ,
	s _ X X X X _ _ _ ,

	// 128 (OF)
	s _ _ _ X X X X _ ,
	s _ _ X _ _ _ _ X ,
	s _ _ X _ _ _ _ X ,
	s _ X X _ _ _ _ X ,
	s _ _ _ X _ _ X _ ,

	s _ _ X X X X _ X ,
	s _ X _ _ _ _ _ _ ,
	s _ X _ _ _ _ _ _ ,
	s _ _ X _ _ _ _ _ ,
	s _ X X X X X _ X ,

	// 130
	s _ _ X X X _ _ _ ,
	s _ X _ X _ X X _ ,
	s _ X _ X _ X _ X ,
	s _ X _ X _ X _ _ ,
	s _ _ _ X X _ _ _ ,

	s _ _ X _ _ _ _ _ ,
	s _ X _ X _ X X _ ,
	s _ X _ X _ X _ X ,
	s _ X _ X _ X X _ ,
	s _ X X X X _ _ _ ,

	s _ _ X _ _ _ _ _ ,
	s _ X _ X _ X _ X ,
	s _ X _ X _ X _ _ ,
	s _ X _ X _ X _ X ,
	s _ X X X X _ _ _ ,

	s _ _ X _ _ _ _ _ ,
	s _ X _ X _ X _ _ ,
	s _ X _ X _ X _ _ ,
	s _ X _ X _ X _ X ,
	s _ X X X X _ X _ ,

	s _ _ X _ _ _ _ _ ,
	s _ X _ X _ X _ _ ,
	s _ X _ X _ X _ X ,
	s _ X _ X _ X _ _ ,
	s _ X X X X _ _ _ ,

	s _ _ _ X X _ _ _ ,
	s _ _ X _ _ X _ _ ,
	s _ _ X _ _ X _ _ ,
	s _ X X _ _ X _ _ ,
	s _ _ X _ _ X _ _ ,

	s _ _ X X X _ _ _ ,
	s _ X _ X _ X X _ ,
	s _ X _ X _ X _ X ,
	s _ X _ X _ X X _ ,
	s _ _ _ X X _ _ _ ,

	s _ _ X X X _ _ _ ,
	s _ X _ X _ X _ X ,
	s _ X _ X _ X _ _ ,
	s _ X _ X _ X _ X ,
	s _ _ _ X X _ _ _ ,

	s _ _ X X X _ _ _ ,
	s _ X _ X _ X _ _ ,
	s _ X _ X _ X _ X ,
	s _ X _ X _ X X _ ,
	s _ _ _ X X _ _ _ ,

	s _ _ _ _ _ _ _ X ,
	s _ X _ _ _ X _ _ ,
	s _ X X X X X _ X ,
	s _ X _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	// 140
	s _ _ _ _ _ _ _ _ ,
	s _ X _ _ X _ X _ ,
	s _ X X X X _ _ X ,
	s _ X _ _ _ _ X _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ X _ _ X _ _ _ ,
	s _ X X X X _ _ X ,
	s _ X _ _ _ _ X _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ X X X X _ _ _ ,
	s _ _ _ X _ X _ X ,
	s _ _ _ X _ X _ _ ,
	s _ _ _ X _ X _ X ,
	s _ X X X X _ _ _ ,

	s _ X X X X _ _ _ ,
	s _ _ _ X _ X _ _ ,
	s _ _ _ X _ X _ X ,
	s _ _ _ X _ X _ _ ,
	s _ X X X X _ _ _ ,

	s _ X X X X X _ _ ,
	s _ X _ X _ X _ _ ,
	s _ X _ X _ X X _ ,
	s _ X _ _ _ X _ X ,
	s _ X _ _ _ X _ _ ,

	s _ _ X _ _ X _ _ ,
	s _ X _ X _ X _ _ ,
	s _ X X X X X _ _ ,
	s _ X _ X _ X _ _ ,
	s _ X _ _ X _ _ _ ,

	s _ X X X X X _ _ ,
	s _ _ _ _ X _ X _ ,
	s _ X X X X X X X ,
	s _ X _ _ X _ _ X ,
	s _ X _ _ X _ _ X ,

	s _ _ X X X _ _ _ ,
	s _ X _ _ _ X X _ ,
	s _ X _ _ _ X _ X ,
	s _ X _ _ _ X X _ ,
	s _ _ X X X _ _ _ ,

	s _ _ X X X _ _ _ ,
	s _ X _ _ _ X _ X ,
	s _ X _ _ _ X _ _ ,
	s _ X _ _ _ X _ X ,
	s _ _ X X X _ _ _ ,

	s _ _ X X X _ _ _ ,
	s _ X _ _ _ X _ _ ,
	s _ X _ _ _ X _ X ,
	s _ X _ _ _ X X _ ,
	s _ _ X X X _ _ _ ,

	// 150
	s _ _ X X X _ _ _ ,
	s _ X _ _ _ _ X _ ,
	s _ X _ _ _ _ _ X ,
	s _ _ X _ _ _ X _ ,
	s _ X X X X _ _ _ ,

	s _ _ X X X _ _ _ ,
	s _ X _ _ _ _ _ _ ,
	s _ X _ _ _ _ _ X ,
	s _ _ X _ _ _ X _ ,
	s _ X X X X _ _ _ ,

	s _ _ _ _ X X _ _ ,
	s _ X _ X _ _ _ X ,
	s _ X _ X _ _ _ _ ,
	s _ X _ X _ _ _ X ,
	s _ _ X X X X _ _ ,

	s _ _ X X X X _ _ ,
	s _ X _ _ _ _ X X ,
	s _ X _ _ _ _ X _ ,
	s _ X _ _ _ _ X X ,
	s _ _ X X X X _ _ ,

	s _ _ X X X X _ _ ,
	s _ X _ _ _ _ _ X ,
	s _ X _ _ _ _ _ _ ,
	s _ X _ _ _ _ _ X ,
	s _ _ X X X X _ _ ,

	s _ X _ X X _ _ _ ,
	s _ _ X _ _ X _ _ ,
	s _ X _ X _ X _ _ ,
	s _ X _ _ X _ _ _ ,
	s _ _ X X _ X _ _ ,

	s _ X X _ X _ _ _ ,
	s _ X _ X X X X _ ,
	s _ X _ _ X _ _ X ,
	s _ X _ _ _ _ _ X ,
	s _ X _ _ _ _ X _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	//160
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	// 170
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	// 180
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	// 190
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ X X X X _ _ _ ,
	s _ _ _ X _ X _ X ,
	s _ _ _ X _ X _ _ ,
	s _ _ _ X _ X _ X ,
	s _ X X X X _ _ _ ,

	s _ X X X X _ _ _ ,
	s _ _ _ X _ X _ _ ,
	s _ _ _ X _ X _ X ,
	s _ _ _ X _ X _ _ ,
	s _ X X X X _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	// 200
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	// 210
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ X X X X _ _ ,
	s _ X _ _ _ _ X X ,
	s _ X _ _ _ _ X _ ,
	s _ X _ _ _ _ X X ,
	s _ _ X X X X _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	// 220
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ X _ _ _ _ _ ,
	s _ X _ X _ X _ X ,
	s _ X _ X _ X _ _ ,
	s _ X _ X _ X _ X ,
	s _ X X X X _ _ _ ,
	
	s _ _ X _ _ _ _ _ ,
	s _ X _ X _ X X _ ,
	s _ X _ X _ X _ X ,
	s _ X _ X _ X X _ ,
	s _ X X X X _ _ _ ,

	// 230
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	// 240
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ X X X _ _ _ ,
	s _ X _ _ _ X _ X ,
	s _ X _ _ _ X _ _ ,
	s _ X _ _ _ X _ X ,
	s _ _ X X X _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,

	// 250
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
	s _ _ _ _ _ _ _ _ ,
};

#endif