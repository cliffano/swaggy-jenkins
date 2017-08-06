/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "EmptyChangeLogSet.h"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace io {
namespace swagger {
namespace server {
namespace model {

EmptyChangeLogSet::EmptyChangeLogSet()
{
    m__class = "";
    m_Kind = "";
    
}

EmptyChangeLogSet::~EmptyChangeLogSet()
{
}

std::string EmptyChangeLogSet::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("_class", m__class);
	pt.put("Kind", m_Kind);
	write_json(ss, pt, false);
	return ss.str();
}

void EmptyChangeLogSet::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m__class = pt.get("_class", "");
	m_Kind = pt.get("Kind", "");
}

std::string EmptyChangeLogSet::getClass() const
{
    return m__class;
}
void EmptyChangeLogSet::setClass(std::string value)
{
    m__class = value;
}
std::string EmptyChangeLogSet::getKind() const
{
    return m_Kind;
}
void EmptyChangeLogSet::setKind(std::string value)
{
    m_Kind = value;
}

}
}
}
}
