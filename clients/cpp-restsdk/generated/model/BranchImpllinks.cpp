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



#include "BranchImpllinks.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

BranchImpllinks::BranchImpllinks()
{
    m_SelfIsSet = false;
    m_ActionsIsSet = false;
    m_RunsIsSet = false;
    m_QueueIsSet = false;
    m__class = utility::conversions::to_string_t("");
    m__classIsSet = false;
}

BranchImpllinks::~BranchImpllinks()
{
}

void BranchImpllinks::validate()
{
    // TODO: implement validation
}

web::json::value BranchImpllinks::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_SelfIsSet)
    {
        val[utility::conversions::to_string_t("self")] = ModelBase::toJson(m_Self);
    }
    if(m_ActionsIsSet)
    {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(m_Actions);
    }
    if(m_RunsIsSet)
    {
        val[utility::conversions::to_string_t("runs")] = ModelBase::toJson(m_Runs);
    }
    if(m_QueueIsSet)
    {
        val[utility::conversions::to_string_t("queue")] = ModelBase::toJson(m_Queue);
    }
    if(m__classIsSet)
    {
        val[utility::conversions::to_string_t("_class")] = ModelBase::toJson(m__class);
    }

    return val;
}

void BranchImpllinks::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("self")))
    {
        if(!val[utility::conversions::to_string_t("self")].is_null())
        {
            std::shared_ptr<Link> newItem(new Link());
            newItem->fromJson(val[utility::conversions::to_string_t("self")]);
            setSelf( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actions")))
    {
        if(!val[utility::conversions::to_string_t("actions")].is_null())
        {
            std::shared_ptr<Link> newItem(new Link());
            newItem->fromJson(val[utility::conversions::to_string_t("actions")]);
            setActions( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("runs")))
    {
        if(!val[utility::conversions::to_string_t("runs")].is_null())
        {
            std::shared_ptr<Link> newItem(new Link());
            newItem->fromJson(val[utility::conversions::to_string_t("runs")]);
            setRuns( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("queue")))
    {
        if(!val[utility::conversions::to_string_t("queue")].is_null())
        {
            std::shared_ptr<Link> newItem(new Link());
            newItem->fromJson(val[utility::conversions::to_string_t("queue")]);
            setQueue( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromJson(val[utility::conversions::to_string_t("_class")]));
    }
}

void BranchImpllinks::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_SelfIsSet)
    {
        if (m_Self.get())
        {
            m_Self->toMultipart(multipart, utility::conversions::to_string_t("self."));
        }
    }
    if(m_ActionsIsSet)
    {
        if (m_Actions.get())
        {
            m_Actions->toMultipart(multipart, utility::conversions::to_string_t("actions."));
        }
    }
    if(m_RunsIsSet)
    {
        if (m_Runs.get())
        {
            m_Runs->toMultipart(multipart, utility::conversions::to_string_t("runs."));
        }
    }
    if(m_QueueIsSet)
    {
        if (m_Queue.get())
        {
            m_Queue->toMultipart(multipart, utility::conversions::to_string_t("queue."));
        }
    }
    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("_class"), m__class));
    }
}

void BranchImpllinks::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("self")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("self")))
        {
            std::shared_ptr<Link> newItem(new Link());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("self."));
            setSelf( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("actions")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("actions")))
        {
            std::shared_ptr<Link> newItem(new Link());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("actions."));
            setActions( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("runs")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("runs")))
        {
            std::shared_ptr<Link> newItem(new Link());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("runs."));
            setRuns( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("queue")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("queue")))
        {
            std::shared_ptr<Link> newItem(new Link());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("queue."));
            setQueue( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("_class"))));
    }
}

std::shared_ptr<Link> BranchImpllinks::getSelf() const
{
    return m_Self;
}


void BranchImpllinks::setSelf(std::shared_ptr<Link> value)
{
    m_Self = value;
    m_SelfIsSet = true;
}
bool BranchImpllinks::selfIsSet() const
{
    return m_SelfIsSet;
}

void BranchImpllinks::unsetSelf()
{
    m_SelfIsSet = false;
}

std::shared_ptr<Link> BranchImpllinks::getActions() const
{
    return m_Actions;
}


void BranchImpllinks::setActions(std::shared_ptr<Link> value)
{
    m_Actions = value;
    m_ActionsIsSet = true;
}
bool BranchImpllinks::actionsIsSet() const
{
    return m_ActionsIsSet;
}

void BranchImpllinks::unsetActions()
{
    m_ActionsIsSet = false;
}

std::shared_ptr<Link> BranchImpllinks::getRuns() const
{
    return m_Runs;
}


void BranchImpllinks::setRuns(std::shared_ptr<Link> value)
{
    m_Runs = value;
    m_RunsIsSet = true;
}
bool BranchImpllinks::runsIsSet() const
{
    return m_RunsIsSet;
}

void BranchImpllinks::unsetRuns()
{
    m_RunsIsSet = false;
}

std::shared_ptr<Link> BranchImpllinks::getQueue() const
{
    return m_Queue;
}


void BranchImpllinks::setQueue(std::shared_ptr<Link> value)
{
    m_Queue = value;
    m_QueueIsSet = true;
}
bool BranchImpllinks::queueIsSet() const
{
    return m_QueueIsSet;
}

void BranchImpllinks::unsetQueue()
{
    m_QueueIsSet = false;
}

utility::string_t BranchImpllinks::getClass() const
{
    return m__class;
}


void BranchImpllinks::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool BranchImpllinks::_classIsSet() const
{
    return m__classIsSet;
}

void BranchImpllinks::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}
