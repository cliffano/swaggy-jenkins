# coding: utf-8

"""
    Swaggy Jenkins

    Jenkins API clients generated from Swagger / Open API specification

    OpenAPI spec version: 0.1.0
    Contact: blah@cliffano.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


from pprint import pformat
from six import iteritems
import re


class GetPipelineBranchesitem(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """


    """
    Attributes:
      swagger_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    swagger_types = {
        'display_name': 'str',
        'estimated_duration_in_millis': 'int',
        'name': 'str',
        'weather_score': 'int',
        'latest_run': 'GetPipelineBranchesitemLatestRun',
        'organization': 'str',
        'pull_request': 'GetPipelineBranchesitemPullRequest',
        'total_number_of_pull_requests': 'int',
        '_class': 'str'
    }

    attribute_map = {
        'display_name': 'displayName',
        'estimated_duration_in_millis': 'estimatedDurationInMillis',
        'name': 'name',
        'weather_score': 'weatherScore',
        'latest_run': 'latestRun',
        'organization': 'organization',
        'pull_request': 'pullRequest',
        'total_number_of_pull_requests': 'totalNumberOfPullRequests',
        '_class': '_class'
    }

    def __init__(self, display_name=None, estimated_duration_in_millis=None, name=None, weather_score=None, latest_run=None, organization=None, pull_request=None, total_number_of_pull_requests=None, _class=None):
        """
        GetPipelineBranchesitem - a model defined in Swagger
        """

        self._display_name = None
        self._estimated_duration_in_millis = None
        self._name = None
        self._weather_score = None
        self._latest_run = None
        self._organization = None
        self._pull_request = None
        self._total_number_of_pull_requests = None
        self.__class = None
        self.discriminator = None

        if display_name is not None:
          self.display_name = display_name
        if estimated_duration_in_millis is not None:
          self.estimated_duration_in_millis = estimated_duration_in_millis
        if name is not None:
          self.name = name
        if weather_score is not None:
          self.weather_score = weather_score
        if latest_run is not None:
          self.latest_run = latest_run
        if organization is not None:
          self.organization = organization
        if pull_request is not None:
          self.pull_request = pull_request
        if total_number_of_pull_requests is not None:
          self.total_number_of_pull_requests = total_number_of_pull_requests
        if _class is not None:
          self._class = _class

    @property
    def display_name(self):
        """
        Gets the display_name of this GetPipelineBranchesitem.

        :return: The display_name of this GetPipelineBranchesitem.
        :rtype: str
        """
        return self._display_name

    @display_name.setter
    def display_name(self, display_name):
        """
        Sets the display_name of this GetPipelineBranchesitem.

        :param display_name: The display_name of this GetPipelineBranchesitem.
        :type: str
        """

        self._display_name = display_name

    @property
    def estimated_duration_in_millis(self):
        """
        Gets the estimated_duration_in_millis of this GetPipelineBranchesitem.

        :return: The estimated_duration_in_millis of this GetPipelineBranchesitem.
        :rtype: int
        """
        return self._estimated_duration_in_millis

    @estimated_duration_in_millis.setter
    def estimated_duration_in_millis(self, estimated_duration_in_millis):
        """
        Sets the estimated_duration_in_millis of this GetPipelineBranchesitem.

        :param estimated_duration_in_millis: The estimated_duration_in_millis of this GetPipelineBranchesitem.
        :type: int
        """

        self._estimated_duration_in_millis = estimated_duration_in_millis

    @property
    def name(self):
        """
        Gets the name of this GetPipelineBranchesitem.

        :return: The name of this GetPipelineBranchesitem.
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """
        Sets the name of this GetPipelineBranchesitem.

        :param name: The name of this GetPipelineBranchesitem.
        :type: str
        """

        self._name = name

    @property
    def weather_score(self):
        """
        Gets the weather_score of this GetPipelineBranchesitem.

        :return: The weather_score of this GetPipelineBranchesitem.
        :rtype: int
        """
        return self._weather_score

    @weather_score.setter
    def weather_score(self, weather_score):
        """
        Sets the weather_score of this GetPipelineBranchesitem.

        :param weather_score: The weather_score of this GetPipelineBranchesitem.
        :type: int
        """

        self._weather_score = weather_score

    @property
    def latest_run(self):
        """
        Gets the latest_run of this GetPipelineBranchesitem.

        :return: The latest_run of this GetPipelineBranchesitem.
        :rtype: GetPipelineBranchesitemLatestRun
        """
        return self._latest_run

    @latest_run.setter
    def latest_run(self, latest_run):
        """
        Sets the latest_run of this GetPipelineBranchesitem.

        :param latest_run: The latest_run of this GetPipelineBranchesitem.
        :type: GetPipelineBranchesitemLatestRun
        """

        self._latest_run = latest_run

    @property
    def organization(self):
        """
        Gets the organization of this GetPipelineBranchesitem.

        :return: The organization of this GetPipelineBranchesitem.
        :rtype: str
        """
        return self._organization

    @organization.setter
    def organization(self, organization):
        """
        Sets the organization of this GetPipelineBranchesitem.

        :param organization: The organization of this GetPipelineBranchesitem.
        :type: str
        """

        self._organization = organization

    @property
    def pull_request(self):
        """
        Gets the pull_request of this GetPipelineBranchesitem.

        :return: The pull_request of this GetPipelineBranchesitem.
        :rtype: GetPipelineBranchesitemPullRequest
        """
        return self._pull_request

    @pull_request.setter
    def pull_request(self, pull_request):
        """
        Sets the pull_request of this GetPipelineBranchesitem.

        :param pull_request: The pull_request of this GetPipelineBranchesitem.
        :type: GetPipelineBranchesitemPullRequest
        """

        self._pull_request = pull_request

    @property
    def total_number_of_pull_requests(self):
        """
        Gets the total_number_of_pull_requests of this GetPipelineBranchesitem.

        :return: The total_number_of_pull_requests of this GetPipelineBranchesitem.
        :rtype: int
        """
        return self._total_number_of_pull_requests

    @total_number_of_pull_requests.setter
    def total_number_of_pull_requests(self, total_number_of_pull_requests):
        """
        Sets the total_number_of_pull_requests of this GetPipelineBranchesitem.

        :param total_number_of_pull_requests: The total_number_of_pull_requests of this GetPipelineBranchesitem.
        :type: int
        """

        self._total_number_of_pull_requests = total_number_of_pull_requests

    @property
    def _class(self):
        """
        Gets the _class of this GetPipelineBranchesitem.

        :return: The _class of this GetPipelineBranchesitem.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class):
        """
        Sets the _class of this GetPipelineBranchesitem.

        :param _class: The _class of this GetPipelineBranchesitem.
        :type: str
        """

        self.__class = _class

    def to_dict(self):
        """
        Returns the model properties as a dict
        """
        result = {}

        for attr, _ in iteritems(self.swagger_types):
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
        """
        Returns the string representation of the model
        """
        return pformat(self.to_dict())

    def __repr__(self):
        """
        For `print` and `pprint`
        """
        return self.to_str()

    def __eq__(self, other):
        """
        Returns true if both objects are equal
        """
        if not isinstance(other, GetPipelineBranchesitem):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other