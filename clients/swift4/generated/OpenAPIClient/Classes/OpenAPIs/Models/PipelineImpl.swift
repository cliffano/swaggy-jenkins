//
// PipelineImpl.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct PipelineImpl: Codable {

    public var _class: String?
    public var displayName: String?
    public var estimatedDurationInMillis: Int?
    public var fullName: String?
    public var latestRun: String?
    public var name: String?
    public var organization: String?
    public var weatherScore: Int?
    public var links: PipelineImpllinks?

    public init(_class: String?, displayName: String?, estimatedDurationInMillis: Int?, fullName: String?, latestRun: String?, name: String?, organization: String?, weatherScore: Int?, links: PipelineImpllinks?) {
        self._class = _class
        self.displayName = displayName
        self.estimatedDurationInMillis = estimatedDurationInMillis
        self.fullName = fullName
        self.latestRun = latestRun
        self.name = name
        self.organization = organization
        self.weatherScore = weatherScore
        self.links = links
    }

    public enum CodingKeys: String, CodingKey { 
        case _class
        case displayName
        case estimatedDurationInMillis
        case fullName
        case latestRun
        case name
        case organization
        case weatherScore
        case links = "_links"
    }


}

