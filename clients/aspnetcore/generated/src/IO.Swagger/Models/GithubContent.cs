/*
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.ComponentModel.DataAnnotations;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Models
{ 
    /// <summary>
    /// 
    /// </summary>
    [DataContract]
    public partial class GithubContent : IEquatable<GithubContent>
    { 
        /// <summary>
        /// Gets or Sets Name
        /// </summary>
        [DataMember(Name="name")]
        public string Name { get; set; }

        /// <summary>
        /// Gets or Sets Sha
        /// </summary>
        [DataMember(Name="sha")]
        public string Sha { get; set; }

        /// <summary>
        /// Gets or Sets Class
        /// </summary>
        [DataMember(Name="_class")]
        public string Class { get; set; }

        /// <summary>
        /// Gets or Sets Repo
        /// </summary>
        [DataMember(Name="repo")]
        public string Repo { get; set; }

        /// <summary>
        /// Gets or Sets Size
        /// </summary>
        [DataMember(Name="size")]
        public int? Size { get; set; }

        /// <summary>
        /// Gets or Sets Owner
        /// </summary>
        [DataMember(Name="owner")]
        public string Owner { get; set; }

        /// <summary>
        /// Gets or Sets Path
        /// </summary>
        [DataMember(Name="path")]
        public string Path { get; set; }

        /// <summary>
        /// Gets or Sets Base64Data
        /// </summary>
        [DataMember(Name="base64Data")]
        public string Base64Data { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class GithubContent {\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Sha: ").Append(Sha).Append("\n");
            sb.Append("  Class: ").Append(Class).Append("\n");
            sb.Append("  Repo: ").Append(Repo).Append("\n");
            sb.Append("  Size: ").Append(Size).Append("\n");
            sb.Append("  Owner: ").Append(Owner).Append("\n");
            sb.Append("  Path: ").Append(Path).Append("\n");
            sb.Append("  Base64Data: ").Append(Base64Data).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            if (ReferenceEquals(null, obj)) return false;
            if (ReferenceEquals(this, obj)) return true;
            return obj.GetType() == GetType() && Equals((GithubContent)obj);
        }

        /// <summary>
        /// Returns true if GithubContent instances are equal
        /// </summary>
        /// <param name="other">Instance of GithubContent to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(GithubContent other)
        {
            if (ReferenceEquals(null, other)) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Name == other.Name ||
                    Name != null &&
                    Name.Equals(other.Name)
                ) && 
                (
                    Sha == other.Sha ||
                    Sha != null &&
                    Sha.Equals(other.Sha)
                ) && 
                (
                    Class == other.Class ||
                    Class != null &&
                    Class.Equals(other.Class)
                ) && 
                (
                    Repo == other.Repo ||
                    Repo != null &&
                    Repo.Equals(other.Repo)
                ) && 
                (
                    Size == other.Size ||
                    Size != null &&
                    Size.Equals(other.Size)
                ) && 
                (
                    Owner == other.Owner ||
                    Owner != null &&
                    Owner.Equals(other.Owner)
                ) && 
                (
                    Path == other.Path ||
                    Path != null &&
                    Path.Equals(other.Path)
                ) && 
                (
                    Base64Data == other.Base64Data ||
                    Base64Data != null &&
                    Base64Data.Equals(other.Base64Data)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                var hashCode = 41;
                // Suitable nullity checks etc, of course :)
                    if (Name != null)
                    hashCode = hashCode * 59 + Name.GetHashCode();
                    if (Sha != null)
                    hashCode = hashCode * 59 + Sha.GetHashCode();
                    if (Class != null)
                    hashCode = hashCode * 59 + Class.GetHashCode();
                    if (Repo != null)
                    hashCode = hashCode * 59 + Repo.GetHashCode();
                    if (Size != null)
                    hashCode = hashCode * 59 + Size.GetHashCode();
                    if (Owner != null)
                    hashCode = hashCode * 59 + Owner.GetHashCode();
                    if (Path != null)
                    hashCode = hashCode * 59 + Path.GetHashCode();
                    if (Base64Data != null)
                    hashCode = hashCode * 59 + Base64Data.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(GithubContent left, GithubContent right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(GithubContent left, GithubContent right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}