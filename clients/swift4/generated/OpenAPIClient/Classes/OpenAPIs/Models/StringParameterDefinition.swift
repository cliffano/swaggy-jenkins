//
// StringParameterDefinition.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct StringParameterDefinition: Codable {

    public var _class: String?
    public var defaultParameterValue: StringParameterValue?
    public var _description: String?
    public var name: String?
    public var type: String?

    public init(_class: String?, defaultParameterValue: StringParameterValue?, _description: String?, name: String?, type: String?) {
        self._class = _class
        self.defaultParameterValue = defaultParameterValue
        self._description = _description
        self.name = name
        self.type = type
    }

    public enum CodingKeys: String, CodingKey { 
        case _class
        case defaultParameterValue
        case _description = "description"
        case name
        case type
    }


}

