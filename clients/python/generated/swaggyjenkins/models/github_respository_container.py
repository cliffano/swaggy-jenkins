# coding: utf-8

"""
    Swaggy Jenkins

    Jenkins API clients generated from Swagger / Open API specification  # noqa: E501

    OpenAPI spec version: 1.0.0
    Contact: blah@cliffano.com
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six


class GithubRespositoryContainer(object):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    """
    Attributes:
      openapi_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    openapi_types = {
        '_class': 'str',
        'links': 'GithubRespositoryContainerlinks',
        'repositories': 'GithubRepositories'
    }

    attribute_map = {
        '_class': '_class',
        'links': '_links',
        'repositories': 'repositories'
    }

    def __init__(self, _class=None, links=None, repositories=None):  # noqa: E501
        """GithubRespositoryContainer - a model defined in OpenAPI"""  # noqa: E501

        self.__class = None
        self._links = None
        self._repositories = None
        self.discriminator = None

        if _class is not None:
            self._class = _class
        if links is not None:
            self.links = links
        if repositories is not None:
            self.repositories = repositories

    @property
    def _class(self):
        """Gets the _class of this GithubRespositoryContainer.  # noqa: E501


        :return: The _class of this GithubRespositoryContainer.  # noqa: E501
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class):
        """Sets the _class of this GithubRespositoryContainer.


        :param _class: The _class of this GithubRespositoryContainer.  # noqa: E501
        :type: str
        """

        self.__class = _class

    @property
    def links(self):
        """Gets the links of this GithubRespositoryContainer.  # noqa: E501


        :return: The links of this GithubRespositoryContainer.  # noqa: E501
        :rtype: GithubRespositoryContainerlinks
        """
        return self._links

    @links.setter
    def links(self, links):
        """Sets the links of this GithubRespositoryContainer.


        :param links: The links of this GithubRespositoryContainer.  # noqa: E501
        :type: GithubRespositoryContainerlinks
        """

        self._links = links

    @property
    def repositories(self):
        """Gets the repositories of this GithubRespositoryContainer.  # noqa: E501


        :return: The repositories of this GithubRespositoryContainer.  # noqa: E501
        :rtype: GithubRepositories
        """
        return self._repositories

    @repositories.setter
    def repositories(self, repositories):
        """Sets the repositories of this GithubRespositoryContainer.


        :param repositories: The repositories of this GithubRespositoryContainer.  # noqa: E501
        :type: GithubRepositories
        """

        self._repositories = repositories

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.openapi_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, GithubRespositoryContainer):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
