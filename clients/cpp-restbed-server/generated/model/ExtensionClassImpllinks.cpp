/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "ExtensionClassImpllinks.h"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

ExtensionClassImpllinks::ExtensionClassImpllinks()
{
    m__class = "";
    
}

ExtensionClassImpllinks::~ExtensionClassImpllinks()
{
}

std::string ExtensionClassImpllinks::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("_class", m__class);
	write_json(ss, pt, false);
	return ss.str();
}

void ExtensionClassImpllinks::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m__class = pt.get("_class", "");
}

std::shared_ptr<Link> ExtensionClassImpllinks::getSelf() const
{
    return m_Self;
}
void ExtensionClassImpllinks::setSelf(std::shared_ptr<Link> value)
{
    m_Self = value;
}
std::string ExtensionClassImpllinks::getClass() const
{
    return m__class;
}
void ExtensionClassImpllinks::setClass(std::string value)
{
    m__class = value;
}

}
}
}
}

