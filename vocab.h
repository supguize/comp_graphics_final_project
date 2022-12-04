void vocab(){

	bool run_vocab = true;

	while(run_vocab){
        std::cout << "What section would you like to explore?"<<std::endl;
        std::cout << "Choice 1: Physics / Astronomy"<<std::endl;
        std::cout << "Choice 2: Achromatic Light"<<std::endl;
        std::cout << "Choice 3: Visible Spectrum"<<std::endl;
        std::cout << "Choice 4: The Eye"<<std::endl;
        std::cout << "Choice 5: Return to main menu"<<std::endl;
        std::cout <<std::endl;

		int vocab_section;
		std::cout << "Please make your selection, by entering the number corresponding to the choice: ";
		std::cin >> vocab_section;
		std::cout << std::endl;

		switch(vocab_section) {
		  case 1:
	    	std::cout << "Computer Graphics: The use of computers to synthesize visual information." << std::endl;
			std::cout << "Luminosity: Total energy output of a light source." << std::endl;
			std::cout << "Brightness: perceived intensity." << std::endl;
			std::cout << "Flux: the amount of energy hitting a unit area." << std::endl;
			std::cout << std::endl;
		    break;
		  case 2:
	    	std::cout << "Luminance (luminous intensity): the quantity of light in the physics sense of energy (i.e., physical amount of energy)." << std::endl;
			std::cout << "Brightness: the perceived intensity in the psychological sense (i.e., our perception of the energy)." << std::endl;
			std::cout << "Note: intensity (or luminance) and brightness are intimately related, but not the same." << std::endl;
		    std::cout << std::endl;
		    break;
		  case 3:
			std::cout << "Visible light: electromagnetic spectrum light wave frequencies in the range 400 nm to 700 nm" << std::endl;
		    std::cout << std::endl;
		    break;
		  case 4:
		    std::cout << "Retina: photosensitive part of eye" << std::endl;
			std::cout << "Cones: responsible for color perception" << std::endl;
			std::cout << "Rods: responsible for low levels of light (night vision; don't help with color)" << std::endl;
			std::cout << "Raster Graphics: represents a picture as a rectangle grid (or matrix) of squares (i.e., pixels)" << std::endl;
			std::cout << "Hue: corresponds most closely to the informal sense of the word “color” and is characterized in a manner similar to colors in the visible spectrum, ranging from dark violet to dark red" << std::endl;
			std::cout << "Saturation: refers to the purity or vividness of a color; colors can range from totally unsaturated gray to partially saturated pastels to fully saturated “pure” colors" << std::endl;
			std::cout << "Perspective projections: all projectors meet at the center of projection" << std::endl;
			std::cout << "Parallel projection: projectors are parallel, center of projection is replaced by a direction of projection" << std::endl;
			std::cout << "Curve: continuous set of points in a -dimensional space" << std::endl;
		    std::cout << std::endl;
		    break;
		  case 5:
		    run_vocab = false;
		    break;
		  default:
		    run_vocab = false;
		}//end switch case
	}//end while
	std::cout << "Returning to main menu." << std::endl;
	std::cout << std::endl;
}//end vocab