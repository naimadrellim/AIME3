#ifndef ENTITYDB_H
#define ENTITYDB_H

#include <map>
#include <memory>
#include "Entity.h"

/***************************************************************************************
 * EntityDB - class that stores and manages the game entities. Entities are stored based
 *				  on a key of zone@id which means that all zone entities will be grouped
 *				  together for purposes of iteration.
 *
 ***************************************************************************************/
class EntityDB 
{
public:
	EntityDB();
   EntityDB(const EntityDB &copy_from);
   virtual ~EntityDB();

	
 
private:
	std::map<std::string, std::shared_ptr<Entity>> _db;

};


#endif
