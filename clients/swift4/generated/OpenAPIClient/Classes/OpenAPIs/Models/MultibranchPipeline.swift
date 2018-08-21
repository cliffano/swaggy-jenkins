//
// MultibranchPipeline.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct MultibranchPipeline: Codable {

    public var displayName: String?
    public var estimatedDurationInMillis: Int?
    public var latestRun: String?
    public var name: String?
    public var organization: String?
    public var weatherScore: Int?
    public var branchNames: [String]?
    public var numberOfFailingBranches: Int?
    public var numberOfFailingPullRequests: Int?
    public var numberOfSuccessfulBranches: Int?
    public var numberOfSuccessfulPullRequests: Int?
    public var totalNumberOfBranches: Int?
    public var totalNumberOfPullRequests: Int?
    public var _class: String?

    public init(displayName: String?, estimatedDurationInMillis: Int?, latestRun: String?, name: String?, organization: String?, weatherScore: Int?, branchNames: [String]?, numberOfFailingBranches: Int?, numberOfFailingPullRequests: Int?, numberOfSuccessfulBranches: Int?, numberOfSuccessfulPullRequests: Int?, totalNumberOfBranches: Int?, totalNumberOfPullRequests: Int?, _class: String?) {
        self.displayName = displayName
        self.estimatedDurationInMillis = estimatedDurationInMillis
        self.latestRun = latestRun
        self.name = name
        self.organization = organization
        self.weatherScore = weatherScore
        self.branchNames = branchNames
        self.numberOfFailingBranches = numberOfFailingBranches
        self.numberOfFailingPullRequests = numberOfFailingPullRequests
        self.numberOfSuccessfulBranches = numberOfSuccessfulBranches
        self.numberOfSuccessfulPullRequests = numberOfSuccessfulPullRequests
        self.totalNumberOfBranches = totalNumberOfBranches
        self.totalNumberOfPullRequests = totalNumberOfPullRequests
        self._class = _class
    }


}

