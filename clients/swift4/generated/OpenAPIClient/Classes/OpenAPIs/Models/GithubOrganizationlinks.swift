//
// GithubOrganizationlinks.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct GithubOrganizationlinks: Codable {

    public var repositories: Link?
    public var _self: Link?
    public var _class: String?

    public init(repositories: Link?, _self: Link?, _class: String?) {
        self.repositories = repositories
        self._self = _self
        self._class = _class
    }

    public enum CodingKeys: String, CodingKey { 
        case repositories
        case _self = "self"
        case _class
    }


}

