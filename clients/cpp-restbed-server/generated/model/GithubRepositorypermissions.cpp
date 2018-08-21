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



#include "GithubRepositorypermissions.h"

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

GithubRepositorypermissions::GithubRepositorypermissions()
{
    m_Admin = false;
    m_Push = false;
    m_Pull = false;
    m__class = "";
    
}

GithubRepositorypermissions::~GithubRepositorypermissions()
{
}

std::string GithubRepositorypermissions::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Admin", m_Admin);
	pt.put("Push", m_Push);
	pt.put("Pull", m_Pull);
	pt.put("_class", m__class);
	write_json(ss, pt, false);
	return ss.str();
}

void GithubRepositorypermissions::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Admin = pt.get("Admin", false);
	m_Push = pt.get("Push", false);
	m_Pull = pt.get("Pull", false);
	m__class = pt.get("_class", "");
}

bool GithubRepositorypermissions::isAdmin() const
{
    return m_Admin;
}
void GithubRepositorypermissions::setAdmin(bool value)
{
    m_Admin = value;
}
bool GithubRepositorypermissions::isPush() const
{
    return m_Push;
}
void GithubRepositorypermissions::setPush(bool value)
{
    m_Push = value;
}
bool GithubRepositorypermissions::isPull() const
{
    return m_Pull;
}
void GithubRepositorypermissions::setPull(bool value)
{
    m_Pull = value;
}
std::string GithubRepositorypermissions::getClass() const
{
    return m__class;
}
void GithubRepositorypermissions::setClass(std::string value)
{
    m__class = value;
}

}
}
}
}

