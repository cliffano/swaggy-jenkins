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


class ClassesByClass(object):
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
        'classes': 'list[str]',
        '_class': 'str'
    }

    attribute_map = {
        'classes': 'classes',
        '_class': '_class'
    }

    def __init__(self, classes=None, _class=None):  # noqa: E501
        """ClassesByClass - a model defined in OpenAPI"""  # noqa: E501

        self._classes = None
        self.__class = None
        self.discriminator = None

        if classes is not None:
            self.classes = classes
        if _class is not None:
            self._class = _class

    @property
    def classes(self):
        """Gets the classes of this ClassesByClass.  # noqa: E501


        :return: The classes of this ClassesByClass.  # noqa: E501
        :rtype: list[str]
        """
        return self._classes

    @classes.setter
    def classes(self, classes):
        """Sets the classes of this ClassesByClass.


        :param classes: The classes of this ClassesByClass.  # noqa: E501
        :type: list[str]
        """

        self._classes = classes

    @property
    def _class(self):
        """Gets the _class of this ClassesByClass.  # noqa: E501


        :return: The _class of this ClassesByClass.  # noqa: E501
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class):
        """Sets the _class of this ClassesByClass.


        :param _class: The _class of this ClassesByClass.  # noqa: E501
        :type: str
        """

        self.__class = _class

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
        if not isinstance(other, ClassesByClass):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
