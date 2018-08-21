//
// BranchImpl.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct BranchImpl: Codable {

    public var _class: String?
    public var displayName: String?
    public var estimatedDurationInMillis: Int?
    public var fullDisplayName: String?
    public var fullName: String?
    public var name: String?
    public var organization: String?
    public var parameters: [StringParameterDefinition]?
    public var permissions: BranchImplpermissions?
    public var weatherScore: Int?
    public var pullRequest: String?
    public var links: BranchImpllinks?
    public var latestRun: PipelineRunImpl?

    public init(_class: String?, displayName: String?, estimatedDurationInMillis: Int?, fullDisplayName: String?, fullName: String?, name: String?, organization: String?, parameters: [StringParameterDefinition]?, permissions: BranchImplpermissions?, weatherScore: Int?, pullRequest: String?, links: BranchImpllinks?, latestRun: PipelineRunImpl?) {
        self._class = _class
        self.displayName = displayName
        self.estimatedDurationInMillis = estimatedDurationInMillis
        self.fullDisplayName = fullDisplayName
        self.fullName = fullName
        self.name = name
        self.organization = organization
        self.parameters = parameters
        self.permissions = permissions
        self.weatherScore = weatherScore
        self.pullRequest = pullRequest
        self.links = links
        self.latestRun = latestRun
    }

    public enum CodingKeys: String, CodingKey { 
        case _class
        case displayName
        case estimatedDurationInMillis
        case fullDisplayName
        case fullName
        case name
        case organization
        case parameters
        case permissions
        case weatherScore
        case pullRequest
        case links = "_links"
        case latestRun
    }


}

