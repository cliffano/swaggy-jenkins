//
// GithubRepository.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct GithubRepository: Codable {

    public var _class: String?
    public var links: GithubRepositorylinks?
    public var defaultBranch: String?
    public var _description: String?
    public var name: String?
    public var permissions: GithubRepositorypermissions?
    public var _private: Bool?
    public var fullName: String?

    public init(_class: String?, links: GithubRepositorylinks?, defaultBranch: String?, _description: String?, name: String?, permissions: GithubRepositorypermissions?, _private: Bool?, fullName: String?) {
        self._class = _class
        self.links = links
        self.defaultBranch = defaultBranch
        self._description = _description
        self.name = name
        self.permissions = permissions
        self._private = _private
        self.fullName = fullName
    }

    public enum CodingKeys: String, CodingKey { 
        case _class
        case links = "_links"
        case defaultBranch
        case _description = "description"
        case name
        case permissions
        case _private = "private"
        case fullName
    }


}

