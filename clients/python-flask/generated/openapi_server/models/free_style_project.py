# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.free_style_build import FreeStyleBuild  # noqa: F401,E501
from openapi_server.models.free_style_projectactions import FreeStyleProjectactions  # noqa: F401,E501
from openapi_server.models.free_style_projecthealth_report import FreeStyleProjecthealthReport  # noqa: F401,E501
from openapi_server.models.null_scm import NullSCM  # noqa: F401,E501
from openapi_server import util


class FreeStyleProject(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, _class: str=None, name: str=None, url: str=None, color: str=None, actions: List[FreeStyleProjectactions]=None, description: str=None, display_name: str=None, display_name_or_null: str=None, full_display_name: str=None, full_name: str=None, buildable: bool=None, builds: List[FreeStyleBuild]=None, first_build: FreeStyleBuild=None, health_report: List[FreeStyleProjecthealthReport]=None, in_queue: bool=None, keep_dependencies: bool=None, last_build: FreeStyleBuild=None, last_completed_build: FreeStyleBuild=None, last_failed_build: str=None, last_stable_build: FreeStyleBuild=None, last_successful_build: FreeStyleBuild=None, last_unstable_build: str=None, last_unsuccessful_build: str=None, next_build_number: int=None, queue_item: str=None, concurrent_build: bool=None, scm: NullSCM=None):  # noqa: E501
        """FreeStyleProject - a model defined in OpenAPI

        :param _class: The _class of this FreeStyleProject.  # noqa: E501
        :type _class: str
        :param name: The name of this FreeStyleProject.  # noqa: E501
        :type name: str
        :param url: The url of this FreeStyleProject.  # noqa: E501
        :type url: str
        :param color: The color of this FreeStyleProject.  # noqa: E501
        :type color: str
        :param actions: The actions of this FreeStyleProject.  # noqa: E501
        :type actions: List[FreeStyleProjectactions]
        :param description: The description of this FreeStyleProject.  # noqa: E501
        :type description: str
        :param display_name: The display_name of this FreeStyleProject.  # noqa: E501
        :type display_name: str
        :param display_name_or_null: The display_name_or_null of this FreeStyleProject.  # noqa: E501
        :type display_name_or_null: str
        :param full_display_name: The full_display_name of this FreeStyleProject.  # noqa: E501
        :type full_display_name: str
        :param full_name: The full_name of this FreeStyleProject.  # noqa: E501
        :type full_name: str
        :param buildable: The buildable of this FreeStyleProject.  # noqa: E501
        :type buildable: bool
        :param builds: The builds of this FreeStyleProject.  # noqa: E501
        :type builds: List[FreeStyleBuild]
        :param first_build: The first_build of this FreeStyleProject.  # noqa: E501
        :type first_build: FreeStyleBuild
        :param health_report: The health_report of this FreeStyleProject.  # noqa: E501
        :type health_report: List[FreeStyleProjecthealthReport]
        :param in_queue: The in_queue of this FreeStyleProject.  # noqa: E501
        :type in_queue: bool
        :param keep_dependencies: The keep_dependencies of this FreeStyleProject.  # noqa: E501
        :type keep_dependencies: bool
        :param last_build: The last_build of this FreeStyleProject.  # noqa: E501
        :type last_build: FreeStyleBuild
        :param last_completed_build: The last_completed_build of this FreeStyleProject.  # noqa: E501
        :type last_completed_build: FreeStyleBuild
        :param last_failed_build: The last_failed_build of this FreeStyleProject.  # noqa: E501
        :type last_failed_build: str
        :param last_stable_build: The last_stable_build of this FreeStyleProject.  # noqa: E501
        :type last_stable_build: FreeStyleBuild
        :param last_successful_build: The last_successful_build of this FreeStyleProject.  # noqa: E501
        :type last_successful_build: FreeStyleBuild
        :param last_unstable_build: The last_unstable_build of this FreeStyleProject.  # noqa: E501
        :type last_unstable_build: str
        :param last_unsuccessful_build: The last_unsuccessful_build of this FreeStyleProject.  # noqa: E501
        :type last_unsuccessful_build: str
        :param next_build_number: The next_build_number of this FreeStyleProject.  # noqa: E501
        :type next_build_number: int
        :param queue_item: The queue_item of this FreeStyleProject.  # noqa: E501
        :type queue_item: str
        :param concurrent_build: The concurrent_build of this FreeStyleProject.  # noqa: E501
        :type concurrent_build: bool
        :param scm: The scm of this FreeStyleProject.  # noqa: E501
        :type scm: NullSCM
        """
        self.openapi_types = {
            '_class': str,
            'name': str,
            'url': str,
            'color': str,
            'actions': List[FreeStyleProjectactions],
            'description': str,
            'display_name': str,
            'display_name_or_null': str,
            'full_display_name': str,
            'full_name': str,
            'buildable': bool,
            'builds': List[FreeStyleBuild],
            'first_build': FreeStyleBuild,
            'health_report': List[FreeStyleProjecthealthReport],
            'in_queue': bool,
            'keep_dependencies': bool,
            'last_build': FreeStyleBuild,
            'last_completed_build': FreeStyleBuild,
            'last_failed_build': str,
            'last_stable_build': FreeStyleBuild,
            'last_successful_build': FreeStyleBuild,
            'last_unstable_build': str,
            'last_unsuccessful_build': str,
            'next_build_number': int,
            'queue_item': str,
            'concurrent_build': bool,
            'scm': NullSCM
        }

        self.attribute_map = {
            '_class': '_class',
            'name': 'name',
            'url': 'url',
            'color': 'color',
            'actions': 'actions',
            'description': 'description',
            'display_name': 'displayName',
            'display_name_or_null': 'displayNameOrNull',
            'full_display_name': 'fullDisplayName',
            'full_name': 'fullName',
            'buildable': 'buildable',
            'builds': 'builds',
            'first_build': 'firstBuild',
            'health_report': 'healthReport',
            'in_queue': 'inQueue',
            'keep_dependencies': 'keepDependencies',
            'last_build': 'lastBuild',
            'last_completed_build': 'lastCompletedBuild',
            'last_failed_build': 'lastFailedBuild',
            'last_stable_build': 'lastStableBuild',
            'last_successful_build': 'lastSuccessfulBuild',
            'last_unstable_build': 'lastUnstableBuild',
            'last_unsuccessful_build': 'lastUnsuccessfulBuild',
            'next_build_number': 'nextBuildNumber',
            'queue_item': 'queueItem',
            'concurrent_build': 'concurrentBuild',
            'scm': 'scm'
        }

        self.__class = _class
        self._name = name
        self._url = url
        self._color = color
        self._actions = actions
        self._description = description
        self._display_name = display_name
        self._display_name_or_null = display_name_or_null
        self._full_display_name = full_display_name
        self._full_name = full_name
        self._buildable = buildable
        self._builds = builds
        self._first_build = first_build
        self._health_report = health_report
        self._in_queue = in_queue
        self._keep_dependencies = keep_dependencies
        self._last_build = last_build
        self._last_completed_build = last_completed_build
        self._last_failed_build = last_failed_build
        self._last_stable_build = last_stable_build
        self._last_successful_build = last_successful_build
        self._last_unstable_build = last_unstable_build
        self._last_unsuccessful_build = last_unsuccessful_build
        self._next_build_number = next_build_number
        self._queue_item = queue_item
        self._concurrent_build = concurrent_build
        self._scm = scm

    @classmethod
    def from_dict(cls, dikt) -> 'FreeStyleProject':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The FreeStyleProject of this FreeStyleProject.  # noqa: E501
        :rtype: FreeStyleProject
        """
        return util.deserialize_model(dikt, cls)

    @property
    def _class(self) -> str:
        """Gets the _class of this FreeStyleProject.


        :return: The _class of this FreeStyleProject.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class: str):
        """Sets the _class of this FreeStyleProject.


        :param _class: The _class of this FreeStyleProject.
        :type _class: str
        """

        self.__class = _class

    @property
    def name(self) -> str:
        """Gets the name of this FreeStyleProject.


        :return: The name of this FreeStyleProject.
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name: str):
        """Sets the name of this FreeStyleProject.


        :param name: The name of this FreeStyleProject.
        :type name: str
        """

        self._name = name

    @property
    def url(self) -> str:
        """Gets the url of this FreeStyleProject.


        :return: The url of this FreeStyleProject.
        :rtype: str
        """
        return self._url

    @url.setter
    def url(self, url: str):
        """Sets the url of this FreeStyleProject.


        :param url: The url of this FreeStyleProject.
        :type url: str
        """

        self._url = url

    @property
    def color(self) -> str:
        """Gets the color of this FreeStyleProject.


        :return: The color of this FreeStyleProject.
        :rtype: str
        """
        return self._color

    @color.setter
    def color(self, color: str):
        """Sets the color of this FreeStyleProject.


        :param color: The color of this FreeStyleProject.
        :type color: str
        """

        self._color = color

    @property
    def actions(self) -> List[FreeStyleProjectactions]:
        """Gets the actions of this FreeStyleProject.


        :return: The actions of this FreeStyleProject.
        :rtype: List[FreeStyleProjectactions]
        """
        return self._actions

    @actions.setter
    def actions(self, actions: List[FreeStyleProjectactions]):
        """Sets the actions of this FreeStyleProject.


        :param actions: The actions of this FreeStyleProject.
        :type actions: List[FreeStyleProjectactions]
        """

        self._actions = actions

    @property
    def description(self) -> str:
        """Gets the description of this FreeStyleProject.


        :return: The description of this FreeStyleProject.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this FreeStyleProject.


        :param description: The description of this FreeStyleProject.
        :type description: str
        """

        self._description = description

    @property
    def display_name(self) -> str:
        """Gets the display_name of this FreeStyleProject.


        :return: The display_name of this FreeStyleProject.
        :rtype: str
        """
        return self._display_name

    @display_name.setter
    def display_name(self, display_name: str):
        """Sets the display_name of this FreeStyleProject.


        :param display_name: The display_name of this FreeStyleProject.
        :type display_name: str
        """

        self._display_name = display_name

    @property
    def display_name_or_null(self) -> str:
        """Gets the display_name_or_null of this FreeStyleProject.


        :return: The display_name_or_null of this FreeStyleProject.
        :rtype: str
        """
        return self._display_name_or_null

    @display_name_or_null.setter
    def display_name_or_null(self, display_name_or_null: str):
        """Sets the display_name_or_null of this FreeStyleProject.


        :param display_name_or_null: The display_name_or_null of this FreeStyleProject.
        :type display_name_or_null: str
        """

        self._display_name_or_null = display_name_or_null

    @property
    def full_display_name(self) -> str:
        """Gets the full_display_name of this FreeStyleProject.


        :return: The full_display_name of this FreeStyleProject.
        :rtype: str
        """
        return self._full_display_name

    @full_display_name.setter
    def full_display_name(self, full_display_name: str):
        """Sets the full_display_name of this FreeStyleProject.


        :param full_display_name: The full_display_name of this FreeStyleProject.
        :type full_display_name: str
        """

        self._full_display_name = full_display_name

    @property
    def full_name(self) -> str:
        """Gets the full_name of this FreeStyleProject.


        :return: The full_name of this FreeStyleProject.
        :rtype: str
        """
        return self._full_name

    @full_name.setter
    def full_name(self, full_name: str):
        """Sets the full_name of this FreeStyleProject.


        :param full_name: The full_name of this FreeStyleProject.
        :type full_name: str
        """

        self._full_name = full_name

    @property
    def buildable(self) -> bool:
        """Gets the buildable of this FreeStyleProject.


        :return: The buildable of this FreeStyleProject.
        :rtype: bool
        """
        return self._buildable

    @buildable.setter
    def buildable(self, buildable: bool):
        """Sets the buildable of this FreeStyleProject.


        :param buildable: The buildable of this FreeStyleProject.
        :type buildable: bool
        """

        self._buildable = buildable

    @property
    def builds(self) -> List[FreeStyleBuild]:
        """Gets the builds of this FreeStyleProject.


        :return: The builds of this FreeStyleProject.
        :rtype: List[FreeStyleBuild]
        """
        return self._builds

    @builds.setter
    def builds(self, builds: List[FreeStyleBuild]):
        """Sets the builds of this FreeStyleProject.


        :param builds: The builds of this FreeStyleProject.
        :type builds: List[FreeStyleBuild]
        """

        self._builds = builds

    @property
    def first_build(self) -> FreeStyleBuild:
        """Gets the first_build of this FreeStyleProject.


        :return: The first_build of this FreeStyleProject.
        :rtype: FreeStyleBuild
        """
        return self._first_build

    @first_build.setter
    def first_build(self, first_build: FreeStyleBuild):
        """Sets the first_build of this FreeStyleProject.


        :param first_build: The first_build of this FreeStyleProject.
        :type first_build: FreeStyleBuild
        """

        self._first_build = first_build

    @property
    def health_report(self) -> List[FreeStyleProjecthealthReport]:
        """Gets the health_report of this FreeStyleProject.


        :return: The health_report of this FreeStyleProject.
        :rtype: List[FreeStyleProjecthealthReport]
        """
        return self._health_report

    @health_report.setter
    def health_report(self, health_report: List[FreeStyleProjecthealthReport]):
        """Sets the health_report of this FreeStyleProject.


        :param health_report: The health_report of this FreeStyleProject.
        :type health_report: List[FreeStyleProjecthealthReport]
        """

        self._health_report = health_report

    @property
    def in_queue(self) -> bool:
        """Gets the in_queue of this FreeStyleProject.


        :return: The in_queue of this FreeStyleProject.
        :rtype: bool
        """
        return self._in_queue

    @in_queue.setter
    def in_queue(self, in_queue: bool):
        """Sets the in_queue of this FreeStyleProject.


        :param in_queue: The in_queue of this FreeStyleProject.
        :type in_queue: bool
        """

        self._in_queue = in_queue

    @property
    def keep_dependencies(self) -> bool:
        """Gets the keep_dependencies of this FreeStyleProject.


        :return: The keep_dependencies of this FreeStyleProject.
        :rtype: bool
        """
        return self._keep_dependencies

    @keep_dependencies.setter
    def keep_dependencies(self, keep_dependencies: bool):
        """Sets the keep_dependencies of this FreeStyleProject.


        :param keep_dependencies: The keep_dependencies of this FreeStyleProject.
        :type keep_dependencies: bool
        """

        self._keep_dependencies = keep_dependencies

    @property
    def last_build(self) -> FreeStyleBuild:
        """Gets the last_build of this FreeStyleProject.


        :return: The last_build of this FreeStyleProject.
        :rtype: FreeStyleBuild
        """
        return self._last_build

    @last_build.setter
    def last_build(self, last_build: FreeStyleBuild):
        """Sets the last_build of this FreeStyleProject.


        :param last_build: The last_build of this FreeStyleProject.
        :type last_build: FreeStyleBuild
        """

        self._last_build = last_build

    @property
    def last_completed_build(self) -> FreeStyleBuild:
        """Gets the last_completed_build of this FreeStyleProject.


        :return: The last_completed_build of this FreeStyleProject.
        :rtype: FreeStyleBuild
        """
        return self._last_completed_build

    @last_completed_build.setter
    def last_completed_build(self, last_completed_build: FreeStyleBuild):
        """Sets the last_completed_build of this FreeStyleProject.


        :param last_completed_build: The last_completed_build of this FreeStyleProject.
        :type last_completed_build: FreeStyleBuild
        """

        self._last_completed_build = last_completed_build

    @property
    def last_failed_build(self) -> str:
        """Gets the last_failed_build of this FreeStyleProject.


        :return: The last_failed_build of this FreeStyleProject.
        :rtype: str
        """
        return self._last_failed_build

    @last_failed_build.setter
    def last_failed_build(self, last_failed_build: str):
        """Sets the last_failed_build of this FreeStyleProject.


        :param last_failed_build: The last_failed_build of this FreeStyleProject.
        :type last_failed_build: str
        """

        self._last_failed_build = last_failed_build

    @property
    def last_stable_build(self) -> FreeStyleBuild:
        """Gets the last_stable_build of this FreeStyleProject.


        :return: The last_stable_build of this FreeStyleProject.
        :rtype: FreeStyleBuild
        """
        return self._last_stable_build

    @last_stable_build.setter
    def last_stable_build(self, last_stable_build: FreeStyleBuild):
        """Sets the last_stable_build of this FreeStyleProject.


        :param last_stable_build: The last_stable_build of this FreeStyleProject.
        :type last_stable_build: FreeStyleBuild
        """

        self._last_stable_build = last_stable_build

    @property
    def last_successful_build(self) -> FreeStyleBuild:
        """Gets the last_successful_build of this FreeStyleProject.


        :return: The last_successful_build of this FreeStyleProject.
        :rtype: FreeStyleBuild
        """
        return self._last_successful_build

    @last_successful_build.setter
    def last_successful_build(self, last_successful_build: FreeStyleBuild):
        """Sets the last_successful_build of this FreeStyleProject.


        :param last_successful_build: The last_successful_build of this FreeStyleProject.
        :type last_successful_build: FreeStyleBuild
        """

        self._last_successful_build = last_successful_build

    @property
    def last_unstable_build(self) -> str:
        """Gets the last_unstable_build of this FreeStyleProject.


        :return: The last_unstable_build of this FreeStyleProject.
        :rtype: str
        """
        return self._last_unstable_build

    @last_unstable_build.setter
    def last_unstable_build(self, last_unstable_build: str):
        """Sets the last_unstable_build of this FreeStyleProject.


        :param last_unstable_build: The last_unstable_build of this FreeStyleProject.
        :type last_unstable_build: str
        """

        self._last_unstable_build = last_unstable_build

    @property
    def last_unsuccessful_build(self) -> str:
        """Gets the last_unsuccessful_build of this FreeStyleProject.


        :return: The last_unsuccessful_build of this FreeStyleProject.
        :rtype: str
        """
        return self._last_unsuccessful_build

    @last_unsuccessful_build.setter
    def last_unsuccessful_build(self, last_unsuccessful_build: str):
        """Sets the last_unsuccessful_build of this FreeStyleProject.


        :param last_unsuccessful_build: The last_unsuccessful_build of this FreeStyleProject.
        :type last_unsuccessful_build: str
        """

        self._last_unsuccessful_build = last_unsuccessful_build

    @property
    def next_build_number(self) -> int:
        """Gets the next_build_number of this FreeStyleProject.


        :return: The next_build_number of this FreeStyleProject.
        :rtype: int
        """
        return self._next_build_number

    @next_build_number.setter
    def next_build_number(self, next_build_number: int):
        """Sets the next_build_number of this FreeStyleProject.


        :param next_build_number: The next_build_number of this FreeStyleProject.
        :type next_build_number: int
        """

        self._next_build_number = next_build_number

    @property
    def queue_item(self) -> str:
        """Gets the queue_item of this FreeStyleProject.


        :return: The queue_item of this FreeStyleProject.
        :rtype: str
        """
        return self._queue_item

    @queue_item.setter
    def queue_item(self, queue_item: str):
        """Sets the queue_item of this FreeStyleProject.


        :param queue_item: The queue_item of this FreeStyleProject.
        :type queue_item: str
        """

        self._queue_item = queue_item

    @property
    def concurrent_build(self) -> bool:
        """Gets the concurrent_build of this FreeStyleProject.


        :return: The concurrent_build of this FreeStyleProject.
        :rtype: bool
        """
        return self._concurrent_build

    @concurrent_build.setter
    def concurrent_build(self, concurrent_build: bool):
        """Sets the concurrent_build of this FreeStyleProject.


        :param concurrent_build: The concurrent_build of this FreeStyleProject.
        :type concurrent_build: bool
        """

        self._concurrent_build = concurrent_build

    @property
    def scm(self) -> NullSCM:
        """Gets the scm of this FreeStyleProject.


        :return: The scm of this FreeStyleProject.
        :rtype: NullSCM
        """
        return self._scm

    @scm.setter
    def scm(self, scm: NullSCM):
        """Sets the scm of this FreeStyleProject.


        :param scm: The scm of this FreeStyleProject.
        :type scm: NullSCM
        """

        self._scm = scm
