# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.github_repositorylinks import GithubRepositorylinks  # noqa: F401,E501
from openapi_server.models.github_repositorypermissions import GithubRepositorypermissions  # noqa: F401,E501
from openapi_server import util


class GithubRepository(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, _class: str=None, links: GithubRepositorylinks=None, default_branch: str=None, description: str=None, name: str=None, permissions: GithubRepositorypermissions=None, private: bool=None, full_name: str=None):  # noqa: E501
        """GithubRepository - a model defined in OpenAPI

        :param _class: The _class of this GithubRepository.  # noqa: E501
        :type _class: str
        :param links: The links of this GithubRepository.  # noqa: E501
        :type links: GithubRepositorylinks
        :param default_branch: The default_branch of this GithubRepository.  # noqa: E501
        :type default_branch: str
        :param description: The description of this GithubRepository.  # noqa: E501
        :type description: str
        :param name: The name of this GithubRepository.  # noqa: E501
        :type name: str
        :param permissions: The permissions of this GithubRepository.  # noqa: E501
        :type permissions: GithubRepositorypermissions
        :param private: The private of this GithubRepository.  # noqa: E501
        :type private: bool
        :param full_name: The full_name of this GithubRepository.  # noqa: E501
        :type full_name: str
        """
        self.openapi_types = {
            '_class': str,
            'links': GithubRepositorylinks,
            'default_branch': str,
            'description': str,
            'name': str,
            'permissions': GithubRepositorypermissions,
            'private': bool,
            'full_name': str
        }

        self.attribute_map = {
            '_class': '_class',
            'links': '_links',
            'default_branch': 'defaultBranch',
            'description': 'description',
            'name': 'name',
            'permissions': 'permissions',
            'private': 'private',
            'full_name': 'fullName'
        }

        self.__class = _class
        self._links = links
        self._default_branch = default_branch
        self._description = description
        self._name = name
        self._permissions = permissions
        self._private = private
        self._full_name = full_name

    @classmethod
    def from_dict(cls, dikt) -> 'GithubRepository':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The GithubRepository of this GithubRepository.  # noqa: E501
        :rtype: GithubRepository
        """
        return util.deserialize_model(dikt, cls)

    @property
    def _class(self) -> str:
        """Gets the _class of this GithubRepository.


        :return: The _class of this GithubRepository.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class: str):
        """Sets the _class of this GithubRepository.


        :param _class: The _class of this GithubRepository.
        :type _class: str
        """

        self.__class = _class

    @property
    def links(self) -> GithubRepositorylinks:
        """Gets the links of this GithubRepository.


        :return: The links of this GithubRepository.
        :rtype: GithubRepositorylinks
        """
        return self._links

    @links.setter
    def links(self, links: GithubRepositorylinks):
        """Sets the links of this GithubRepository.


        :param links: The links of this GithubRepository.
        :type links: GithubRepositorylinks
        """

        self._links = links

    @property
    def default_branch(self) -> str:
        """Gets the default_branch of this GithubRepository.


        :return: The default_branch of this GithubRepository.
        :rtype: str
        """
        return self._default_branch

    @default_branch.setter
    def default_branch(self, default_branch: str):
        """Sets the default_branch of this GithubRepository.


        :param default_branch: The default_branch of this GithubRepository.
        :type default_branch: str
        """

        self._default_branch = default_branch

    @property
    def description(self) -> str:
        """Gets the description of this GithubRepository.


        :return: The description of this GithubRepository.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this GithubRepository.


        :param description: The description of this GithubRepository.
        :type description: str
        """

        self._description = description

    @property
    def name(self) -> str:
        """Gets the name of this GithubRepository.


        :return: The name of this GithubRepository.
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name: str):
        """Sets the name of this GithubRepository.


        :param name: The name of this GithubRepository.
        :type name: str
        """

        self._name = name

    @property
    def permissions(self) -> GithubRepositorypermissions:
        """Gets the permissions of this GithubRepository.


        :return: The permissions of this GithubRepository.
        :rtype: GithubRepositorypermissions
        """
        return self._permissions

    @permissions.setter
    def permissions(self, permissions: GithubRepositorypermissions):
        """Sets the permissions of this GithubRepository.


        :param permissions: The permissions of this GithubRepository.
        :type permissions: GithubRepositorypermissions
        """

        self._permissions = permissions

    @property
    def private(self) -> bool:
        """Gets the private of this GithubRepository.


        :return: The private of this GithubRepository.
        :rtype: bool
        """
        return self._private

    @private.setter
    def private(self, private: bool):
        """Sets the private of this GithubRepository.


        :param private: The private of this GithubRepository.
        :type private: bool
        """

        self._private = private

    @property
    def full_name(self) -> str:
        """Gets the full_name of this GithubRepository.


        :return: The full_name of this GithubRepository.
        :rtype: str
        """
        return self._full_name

    @full_name.setter
    def full_name(self, full_name: str):
        """Sets the full_name of this GithubRepository.


        :param full_name: The full_name of this GithubRepository.
        :type full_name: str
        """

        self._full_name = full_name