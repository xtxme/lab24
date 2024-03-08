line_up.push_back("Luffy");
	line_up.push_back("Sanji");
	line_up.push_back("Nami");

	line_up.pop_front();
	line_up.pop_front();
	loc = find (line_up.begin(),line_up.end(),"Sanji");
	line_up.insert(loc,"Narutu");

	line_up.push_front("Prayath");
	loc = find(line_up.begin(),line_up.end(),"Bob");
	line_up.insert(loc,"Tony");

	loc = line_up.begin();
	loc++;
	line_up.erase(loc);
	line_up.pop_front();
	line_up.pop_front();
	line_up.pop_front();
	
	
	printList(line_up);
		